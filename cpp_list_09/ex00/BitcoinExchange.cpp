/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:40:33 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/16 11:54:32 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	bitcoinPrices = other.bitcoinPrices;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other) {
		bitcoinPrices = other.bitcoinPrices;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::calculate(char *argv){
	parseDataBase("data/data.csv");
	processInputFile(argv);
}

void BitcoinExchange::parseDataBase(const std::string& filename) {
	std::ifstream file(filename.c_str());
	if (!file.is_open()) {
		std::cerr << "Error: could not open file." << std::endl;
	}
	std::string line;
	getline(file, line);
	while (getline(file, line)) {
		std::stringstream ss(line);
		std::string date;
		double price;
		getline(ss, date, ',');
		ss >> price;
		bitcoinPrices[date] = price;
	}
	file.close();
}

std::string BitcoinExchange::trim(const std::string& str) {
	size_t first = str.find_first_not_of(' ');
	size_t last = str.find_last_not_of(' ');
	return str.substr(first, (last - first + 1));
}

int BitcoinExchange::validate(std::string date, double value) {
	if (value < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}

	if (value > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	int year, month, day;
	if (date[4] != '-' || date[7] != '-' || (std::sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3 ||
		year < 0 || month < 1 || month > 12 || day < 1 || day > 31)) {
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	return (true);
}

void BitcoinExchange::processInputFile(char *inputFilename) {
	std::ifstream inputFile(inputFilename);

	if (!inputFile.is_open()) {
		std::cerr << "Error: could not open input file." << std::endl;
		return ;
	}

	std::string line;
	getline(inputFile, line);
	while (getline(inputFile, line)) {
		std::stringstream ss(line);
		std::string date;
		double value;

		getline(ss, date, '|');
		if (ss >> value){
			date = trim(date);
			if (validate(date, value)){
				std::map<std::string, double>::const_iterator it = bitcoinPrices.lower_bound(date);
				
				if (it == bitcoinPrices.begin()) {
					std::cerr << "Error: Date before first entry into the database" << std::endl;
					continue;
				}
				
				if (it == bitcoinPrices.end()) {
					std::map<std::string, double>::const_iterator prevDate = it;
					double _value = prevDate->second;
					std::cout << std::fixed << std::setprecision(2);
					std::cout << date << " => " << value << " = " << (value * _value) << std::endl;
					continue;
				}
				
				std::map<std::string, double>::const_iterator prevDate = it;
				--prevDate;
				double _value = prevDate->second;
				std::cout << std::fixed << std::setprecision(2);
				std::cout << date << " => " << value << " = " << (value * _value) << std::endl;
			}
		}
		else{
			std::cout << "Error: bad input => " << date << std::endl;
		}
	}
	inputFile.close();
}
