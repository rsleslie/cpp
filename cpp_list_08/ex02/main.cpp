/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:34:37 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 14:12:35 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main()
{

    //-------------------------------cor-------------------
    
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	const std::string pink = "\033[1;35m";
    
	//---------------------------------end cor----------------------------
    
    std::cout << bold;
    
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << yellow << "Ultimo elemento add -> "<< mstack.top() << std::endl;
    std::cout << "tamanho da stack: "<< mstack.size() << std::endl;
    std::cout << "removendo o ultimo add" << std::endl;
    mstack.pop();
    std::cout << "tamanho da stack: "<< mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    
    while (it !=  mstack.end())
    {
        std::cout << "[ "<< *it << " ]";
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "\nultimo elemento de s: " << s.top(); 
    return 0;
}
