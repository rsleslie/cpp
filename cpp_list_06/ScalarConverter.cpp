/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:12:43 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 13:58:44 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
# include <iomanip>
# include <cmath>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	return *this;
}

void ScalarConverter::convert(const std::string &arg)
{
	//-------------cor
	
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	const std::string pink = "\033[1;35m";
	//--------------------------cor
	int	c;
	int		i;
	float	f;
	double	d;

	std::istringstream charStream(arg);
	std::cout << bold << yellow;
	
	if (charStream >> c) {
		if (c >= 32 && c <= 126)
			std::cout << "char:\t" << static_cast<char>(c) << std::endl;
		else
			std::cout << "char:\tNon displayable" << std::endl;
	} else {
		std::cout << "char:\timpossible" << std::endl;
	}

	std::istringstream intStream(arg);
	std::cout << blue;
	
	if (intStream >> i){
		std::cout << "int:\t"<<static_cast<int>(i) << std::endl;
	}
	else
		std::cout << "int:\timpossible"	<< std::endl;

	std::istringstream floatStream(arg);
	std::cout << pink;
	
	if (floatStream >> f){
		if (f == std::numeric_limits<float>::infinity())
			std::cout << "float:\t+inff" << std::endl;
		else if (f == -std::numeric_limits<float>::infinity())
			std::cout << "float:\t-inff" << std::endl;
		else if (std::isnan(f))
			std::cout << "float:\tnanf" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << "float:\t"<< static_cast<float>(f) << "f" << std::endl;
	}
	else
		std::cout << "float:\tnanf"	<< std::endl;

	std::istringstream doubleStream(arg);
	std::cout << green;

	if (doubleStream >> d){
		if (d == std::numeric_limits<double>::infinity())
				std::cout << "double:\t+inf" << std::endl;
			else if (d == -std::numeric_limits<double>::infinity())
				std::cout << "double:\t-inf" << std::endl;
			else if (std::isnan(d))
				std::cout << "double:\tnan" << std::endl;
			else
				std::cout << std::fixed << std::setprecision(1) << "float:\t"<< static_cast<double>(d) << std::endl;	
	}
	else
		std::cout << "float:\tnan"	<< std::endl;
}

/*

























#include <iostream>
#include <sstream>
#include <limits>

class ScalarConverter {
public:
	static void convert(const std::string &input) {
		char c;
		int i;
		float f;
		double d;

		std::cout << "Input: " << input << std::endl;

		// Attempt to convert to char
		std::istringstream charStream(input);
		if (charStream >> c) {
			if (c >= 32 && c <= 126)
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		} else {
			std::cout << "char: impossible" << std::endl;
		}

		// Attempt to convert to int
		std::istringstream intStream(input);
		if (intStream >> i) {
			std::cout << "int: " << i << std::endl;
		} else {
			std::cout << "int: impossible" << std::endl;
		}

		// Attempt to convert to float
		std::istringstream floatStream(input);
		if (floatStream >> f) {
			if (f == std::numeric_limits<float>::infinity())
				std::cout << "float: +inff" << std::endl;
			else if (f == -std::numeric_limits<float>::infinity())
				std::cout << "float: -inff" << std::endl;
			else if (std::isnan(f))
				std::cout << "float: nanf" << std::endl;
			else
				std::cout << "float: " << f << "f" << std::endl;
		} else {
			std::cout << "float: impossible" << std::endl;
		}

		// Attempt to convert to double
		std::istringstream doubleStream(input);
		if (doubleStream >> d) {
			if (d == std::numeric_limits<double>::infinity())
				std::cout << "double: +inf" << std::endl;
			else if (d == -std::numeric_limits<double>::infinity())
				std::cout << "double: -inf" << std::endl;
			else if (std::isnan(d))
				std::cout << "double: nan" << std::endl;
			else
				std::cout << "double: " << d << std::endl;
		} else {
			std::cout << "double: impossible" << std::endl;
		}
	}
};

int main() {
	ScalarConverter::convert("0");
	ScalarConverter::convert("nan");
	ScalarConverter::convert("42.0f");

	return 0;
}






*/