/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:20:13 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/16 12:29:14 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"
# include <sstream>
#include <ctime>

template<template<typename, typename> class T>
void print(T<int, std::allocator<int> >& _list) 
{
	const std::string yellow = "\033[33m";

	std::cout << yellow;	
   	for (size_t i = 0; i < _list.size(); i++) {
		std::cout << "[ " << _list[i] << " ]";
	}
	std::cout << std::endl;
}

int main(int argc, char **argv){
	 //-------------------------------cor-------------------
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string pink = "\033[1;35m";
	//---------------------------------end cor----------------------------

	std::deque<int> myDeque;
	std::vector<int> myVector;

	std::cout << bold;
	if (argc == 1) {
		std::cout << red << "Too many arguments" << std::endl;
		return 1;
	}

	for (int i = 1; i < argc; ++i) {
		int num;
		std::istringstream iss(argv[i]);
		if (!(iss >> num)) {
			std::cout << red << "Invalid input: " << argv[i] << std::endl;
			return 1;
		}
		myDeque.push_back(num);
		myVector.push_back(num);
	}

	std::cout << blue << "Deque" << std::endl;
	std::cout << pink << "Before: ";
	print(myDeque);
	

	clock_t start, end;
	double duration;

	start = clock();

	PmergeMe<std::deque> mDeque(myDeque);

	std::cout << green << "After: ";
	print(myDeque);

	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;

	std::cout << red << "time: " << duration << std::endl;

	//----------------------
	std::cout << blue << "\n\nVector" << std::endl;
	std::cout << pink << "Before: ";
	print(myVector);
	
	start = clock();
	
	PmergeMe<std::vector> mVector(myVector);
	
	std::cout << green << "After: ";
	print(myVector);
	
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	std::cout << red << "time: " << duration << std::endl;
	
	std::cout << reset;
	return (0);
}
