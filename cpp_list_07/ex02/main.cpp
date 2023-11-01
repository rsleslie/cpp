/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:56:14 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/01 14:51:56 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX 6
int main(int, char**)
{

	//---------------------------------cor
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	const std::string pink = "\033[1;35m";
	//---------------------------------end
	std::cout << bold;
	
	Array<int> numbers(MAX);
	Array<int> types;
	
	//elemento fora dos limites
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << red;
		std::cerr << e.what() << '\n';
	}
	 try
	{
		numbers[7] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << red;
		std::cerr << e.what() << '\n';
	}
	
	//operadores de copia e igual
	std::cout << yellow << "initializing array = ";
	for (int i = 0; i < MAX; i++)
	{
		numbers[i] = i + 1;
		std::cout << "[" << numbers[i] << "] ";
	}

	std::cout << green << "\n\nconstructor copy end operator " << std::endl;
	
	Array<int> copy(numbers);
	Array<int> equal = numbers;
	
	for (int i = 0; i < MAX; i++)
	{
		if (numbers[i] != copy[i] && numbers[i] != equal[i])
		{
			std::cout << red;
			std::cout << "error copintg array" << std::endl;
			break ;
		}
	}
	
	std::cout << blue << "copy = ";
	for (int i = 0; i < MAX; i++)
	{
		std::cout << "[" << copy[i] << "] ";
	}
	std::cout << blue << "\noperator = ";
	for (int i = 0; i < MAX; i++)
	{
		std::cout << "[" << equal[i] << "] ";
	}
	
	std::cout << reset;
}
