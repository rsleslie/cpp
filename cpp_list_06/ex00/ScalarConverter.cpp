/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:12:43 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/25 14:10:55 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
# include <iomanip>
# include <cmath>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}

bool	isCharacter(char c)
{
	if (c >= 32 && c <= 126)
		return (true);
	return (false);
}


int		typeNumber(const std::string &arg)
{
	if (!std::isdigit(arg[0]))
		return (0);

	for (unsigned long i = 0; i <= arg.length(); i++)
	{
		if (arg[i] == '.')
		{
			while(i++ && arg[i])
			{
				if (!std::isdigit(arg[i]) || !arg[i + 1])
				{
					if (arg[i] == 'f')
						return (2);
					else
						return (3);
				}
			}
		}
	}
	return (1);


}

int typeI(const double i){
	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min()){
		std::cout << "int:\timpossible"	<< std::endl;
		return (false);
	}
	return (true);
	
}


int typeD(const double n)
{
	if (n > std::numeric_limits<double>::max()){
		std::cout << "double:\t+inff" << std::endl;
		return (false);
	}
	else if (n < std::numeric_limits<double>::min() && n != 0){
		std::cout << "double:\t-inff" << std::endl;
		return (false);
	}
	else if (std::isnan(static_cast<double>(n))){
		std::cout << "double:\tnanf" << std::endl;
		return (false);
	}
	return (true);
}

int typeF(const double n)
{
	if (n > std::numeric_limits<float>::max()){
		std::cout << "float:\t+inff" << std::endl;
		return (false);
	}
	else if (n < std::numeric_limits<float>::min() && n != 0){
		std::cout << "float:\t-inff" << std::endl;
		return (false);
	}
	else if (std::isnan(static_cast<float>(n))){
		std::cout << "float:\tnanf" << std::endl;
		return (false);
	}
	return (true);
}

int typeC(const double n)
{
	if (n >= 32 && n <= 126){
		return (true);
	}
	std::cout << "char: Non displayable" << std::endl;
	return (false);
}

void ScalarConverter::convertType(const char c) {
  
	std::cout << "this type is: char" << std::endl;
	std::cout << "char:\t" << "'" << static_cast<char>(c) << "'" << std::endl;
	std::cout << "int:\t" << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "float:\t" << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double:\t" << static_cast<double>(c) << std::endl;
}

void	typeInt(const double n)
{
	int i;
	std::cout << "this type is: int" << std::endl;
	if (n > std::numeric_limits<int>::max())
	{
		std::cout << "int max" << std::endl;
		return ;
	}
	if ( n < std::numeric_limits<int>::min()){
		std::cout << "int min" << std::endl;
		return ;
	}
	if (typeC(n) == true){
		i = static_cast<int>(n);
		std::cout << "char: " << "'" << static_cast<char>(i) << "'" << std::endl;	
	}
	if (typeI(n) == true)
	{
		i = static_cast<int>(n);
		std::cout << "int:\t" << static_cast<int>(i) << std::endl;
	}
	if (typeF(n) == true)
	{
		i = static_cast<int>(n);
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "float:\t" << static_cast<float>(i) << "f" << std::endl;
	}
	if (typeD(n) == true)
	{
		i = static_cast<int>(n);
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "double:\t" << static_cast<double>(i) << std::endl;
	}
}

void typeFloat(const double n)
{
	float i;
	std::cout << "this type is: float" << std::endl;
	//quebrar
	if (n > std::numeric_limits<float>::max()){
		std::cout << "float max" << std::endl;
		return ;
	}
	else if (n < std::numeric_limits<float>::min() && n != 0){
		std::cout << "float min" << std::endl;
		return ;
	}
	if (typeC(n) == true){
		i = static_cast<float>(n);
		std::cout << "char:\t" << "'" << static_cast<char>(i) << "'" << std::endl;	
	}
	if (typeI(n) == true)
	{
		i = static_cast<float>(n);
		std::cout << "int:\t" << static_cast<int>(i) << std::endl;
	}
	if (typeF(n) == true)
	{
		i = static_cast<float>(n);
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "float:\t" << static_cast<float>(i) << "f" << std::endl;
	}
	if (typeD(n) == true)
	{
		i = static_cast<float>(n);
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "double:\t" << static_cast<double>(i) << std::endl;
	}
}

void typeDouble(const double n)
{
	double i;
	std::cout << "this type is: double" << std::endl;
	if (n > std::numeric_limits<double>::max()){
		std::cout << "double max" << std::endl;
		return ;
	}
	else if (n < std::numeric_limits<double>::min() && n != 0 ){
		std::cout << "double min" << std::endl;
		return ;
	}
	if (typeC(n) == true){
		i = static_cast<double>(n);
		std::cout << "char:\t" << "'" << static_cast<char>(i) << "'" << std::endl;	
	}
	if (typeI(n) == true)
	{
		i = static_cast<double>(n);
		std::cout << "int:\t" << static_cast<int>(i) << std::endl;
	}
	if (typeF(n) == true)
	{
		i = static_cast<double>(n);
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "float:\t" << static_cast<float>(i) << "f" << std::endl;
	}
	if (typeD(n) == true)
	{
		i = static_cast<double>(n);
		std::cout << std::fixed << std::setprecision(2);
		std::cout << "double:\t" << static_cast<double>(i) << std::endl;
	}
}

void ScalarConverter::convertType(const double n, int type){
	if (type == 1){
		typeInt(n);
	}
	if (type == 2){
		typeFloat(n);
	}
	if (type == 3){
		typeDouble(n);
	}
}

int isNanf(const std::string &arg)
{
	std::string str;
	std::istringstream isNan(arg);
	isNan >> str;
	if (str == "nan" || str == "nanf" || str == "NAN")
	{
		std::cout << "char:\timpossible" << std::endl;
		std::cout << "int:\timpossible" << std::endl; 
		std::cout << "float:\tnanf" << std::endl; 
		std::cout << "double:\tnan" << std::endl;
		return (true);
	}
	return (false);
}

void ScalarConverter::convert(const std::string &arg)
{
	//-------------cor
	
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	
	//--------------------------cor
	
	std::istringstream valueArg(arg);
	
	if (isNanf(arg))
		return ;
	std::cout << bold << green;
	switch (typeNumber(arg))
	{
	case 0:
		char c;
		valueArg >> c;
		convertType(c);
		break;
	case 1:
		double i;
		if (valueArg >> i)
			convertType(i, 1);
		else
			std::cout << "very large number" << std::endl;
		break;
	case 2:
		double f;
		if (valueArg >> f)
			convertType(f, 2);
		else
			std::cout << "very large number" << std::endl;
		break;
	case 3:
		double d;
		if (valueArg >> d)
			convertType(d, 3);
		else
			std::cout << "very large number" << std::endl;
		break;
	default:
		break;
	}
	std::cout << reset;
}
