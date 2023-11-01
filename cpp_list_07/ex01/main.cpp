/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:50:33 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/01 14:26:18 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T &element) {
    std::cout << "[" << element << "] ";
}

int main() {

     //---------------------------------cor
    const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	const std::string pink = "\033[1;35m";
    //---------------------------------end
    
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string stringArray[] = {"maca", "banana", "uva", "amora", "pera"};
    
    std::cout << bold << green;
    std::cout << "Printing intArray: ";
    iter(intArray, 5, print<int>);
    std::cout << std::endl;

    std::cout << blue << std::endl; 
    std::cout << "Printing doubleArray: ";
    iter(doubleArray, 5, print<double>);
    std::cout << std::endl;

    std::cout << yellow << std::endl;
    std::cout << "Printing stringArray: ";
    iter(stringArray, 5, print<std::string>);
    std::cout << reset << std::endl;

    return 0;
}
