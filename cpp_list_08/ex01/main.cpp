/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:57:59 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 13:30:50 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	
	 //-------------------------------cor-------------------
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	const std::string pink = "\033[1;35m";
	//---------------------------------end cor----------------------------

   
    Span sp(5);
    Span sp2(10000);
    

    
    try {
		std::cout << bold << yellow << "TESTE 0" << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    } catch (const std::exception &e) {
		std::cout << red;
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try 
	{
		std::cout << blue << "TESTE 1" << std::endl;
		for (int i = 0; i < 10000; i++){
			sp2.addNumber((i + 1));
		}
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    } catch (const std::exception &e) {
		std::cout << red;
        std::cerr << "Error: " << e.what() << std::endl;
    }

	try 
	{
		std::cout << pink << "TESTE 2" << std::endl;
		sp2.addNumber(11);
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    } catch (const std::exception &e) {
		std::cout << red;
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
