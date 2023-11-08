/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:07:53 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 13:01:09 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {

	//-------------------------------cor-------------------
	const std::string red = "\033[1;31m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	//---------------------------------end cor----------------------------
	
	std::vector<int> typeVetctor;
	typeVetctor.push_back(1);
	typeVetctor.push_back(2);
	typeVetctor.push_back(3);
	typeVetctor.push_back(4);
	typeVetctor.push_back(5);

	std::list<int> typeList;
	typeList.push_back(5);
	typeList.push_back(8);
	typeList.push_back(10);
	typeList.push_back(11);
	typeList.push_back(1);
		
	std::cout << bold;
	try{
		std::cout << blue << "TESTE 0 VECTOR\t{1, 2, 3, 4, 5} search 4\t->\t" ;
		
		std::vector<int>::iterator result = easyfind(typeVetctor, 4);
		std::cout << yellow << "Value found at position: " << std::distance(typeVetctor.begin(), result) << std::endl;
	} catch (std::exception& e) {
		std::cout << red << e.what() << std::endl;
	}
	 try{
		std::cout << blue <<  "TESTE 1 VECTOR\t{1, 2, 3, 4, 5} search 9\t->\t" ;
		
		std::vector<int>::iterator result = easyfind(typeVetctor, 9);
		std::cout << yellow << "Value found at position: " << std::distance(typeVetctor.begin(), result) << std::endl;
	} catch (std::exception& e) {
		std::cout << red << e.what() << std::endl;
	}

	//list

	  try{
		std::cout << blue << "TESTE 2 LIST\t{5, 8, 10, 11, 1} search 8\t->\t" ;
		
		std::list<int>::iterator result = easyfind(typeList, 8);
		std::cout << yellow << "Value found at position: " << std::distance(typeList.begin(), result) << std::endl;
	} catch (std::exception& e) {
		std::cout << red << e.what() << std::endl;
	}
	 try{
		std::cout << blue <<  "TESTE 3 LIST\t{5, 8, 10, 11, 1} search 9\t->\t" ;
		
		std::list<int>::iterator result = easyfind(typeList, 9);
		std::cout << yellow << "Value found at position: " << std::distance(typeList.begin(), result) << std::endl;
	} catch (std::exception& e) {
		std::cout << red << e.what() << std::endl;
	}
	
	std::cout << reset;
	return 0;
}
