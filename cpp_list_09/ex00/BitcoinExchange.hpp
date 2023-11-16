/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:40:30 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/16 15:45:17 by rleslie-         ###   ########.fr       */
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
