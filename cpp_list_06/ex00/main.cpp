/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:56:12 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/25 15:53:50 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
	//-----------------------------cor
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	const std::string pink = "\033[1;35m";
	//------------------------cor
	
	if (argc != 2){
		std::cout << bold << pink << "invalid number of arguments" << std::endl; 
		std::cout << reset;
		return (0);
	}

	ScalarConverter::convert(argv[1]);

	return (0);
}
