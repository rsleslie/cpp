/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:42:43 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 18:46:34 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	var = "HI THIS IS BRAIN";
	std::string* stringPTR = &var;
	std::string& stringREF = var;
	
	//the memory address
	std::cout << &var << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << std::endl;
	//value
	std::cout << var << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}