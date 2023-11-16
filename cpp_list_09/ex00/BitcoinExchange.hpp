/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:40:30 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/10 15:19:00 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <iomanip>

class BitcoinExchange {
	private:
		std::map<std::string, double>	bitcoinPrices;
		std::string						trim(const std::string& str);
		void							processInputFile(char *inputFilename);
		void							parseDataBase(const std::string& filename);
		int								validate(std::string date, double value);

	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();
		
		void							calculate(char *argv);
};

#endif









// #ifndef BITCOINEXCHANGE_HPP
// # define BITCOINEXCHANGE_HPP

// #include <iostream>
// #include <map>
// #include <fstream>
// #include <exception>

// class BitcoinExchange
// {
// 	private:
// 		std::map<std::string, double>	bitcoin;
// 		void							readFile(char *_file);
// 		void							validate(std::string date, double value);
// 		void							price(std::string data, double value);
// 		void							initBiticoin(char *_file);
// 		void							validateBiticoin(std::string date, double value);

// 	public:
// 		BitcoinExchange(void);
// 		BitcoinExchange(char *_file);
// 		BitcoinExchange(const BitcoinExchange & other);//fazer o construtor
// 		~BitcoinExchange();
		
// 		BitcoinExchange& operator=(const BitcoinExchange& other);//fazer o construtor
// 		int dateDifference(const std::string& date1, const std::string& date2);
// };

// #endif






/*
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <stdexcept>

class BitcoinExchange {
private:
	std::unordered_map<std::string, double> bitcoinPrices;

public:
	BitcoinExchange(const std::string& filename) {
		loadBitcoinPrices(filename);
	}

	void evaluatePrices(const std::string& filename) {
		std::ifstream file(filename);
		if (!file.is_open()) {
			std::cerr << "Error: could not open file." << std::endl;
			return;
		}

		std::string line;
		while (std::getline(file, line)) {
			std::istringstream iss(line);
			std::string date;
			double value;

			if (iss >> date >> value) {
				evaluatePrice(date, value);
			} else {
				std::cerr << "Error: bad input => " << line << std::endl;
			}
		}
	}

private:
	void loadBitcoinPrices(const std::string& filename) {
		std::ifstream file(filename);
		if (!file.is_open()) {
			throw std::runtime_error("Error: could not open Bitcoin prices file.");
		}

		std::string line;
		while (std::getline(file, line)) {
			std::istringstream iss(line);
			std::string date;
			double price;

			if (iss >> date >> price) {
				bitcoinPrices[date] = price;
			}
		}
	}

	void evaluatePrice(const std::string& date, double value) {
		auto it = bitcoinPrices.find(date);
		if (it != bitcoinPrices.end()) {
			double exchangeRate = it->second;
			double result = value * exchangeRate;
			std::cout << date << " => " << value << " = " << result << std::endl;
		} else {
			std::cerr << "Warning: Date not found in database. Using the closest date." << std::endl;
			// Implement logic to find the closest date and evaluate the price.
		}
	}
};

int main() {
	BitcoinExchange exchange("bitcoin_prices.csv");
	exchange.evaluatePrices("input.txt");

	return 0;
}




*/