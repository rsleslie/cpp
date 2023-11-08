/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:34:37 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 17:49:52 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include <exception>

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
    std::cout << "\nultimo elemento da copia s: " << s.top();
    
    //-------------------------
    
    std::cout << "\n\n"<< std::endl;
    std::stack<int> mStack;

    mStack.push(5);
    mStack.push(17);
    std::cout << blue << "Ultimo elemento add -> "<< mStack.top() << std::endl;
    std::cout << "tamanho da stack: "<< mStack.size() << std::endl;
    std::cout << "removendo o ultimo add" << std::endl;
    mStack.pop();
    std::cout << "tamanho da stack: "<< mStack.size() << std::endl;
    mStack.push(3);
    mStack.push(5);
    mStack.push(737);
    mStack.push(0);
    
    std::stack<int> copyStack = mStack;
    
   while (!copyStack.empty()) {
        int top_element = copyStack.top();
        copyStack.pop();
        std::cout << "[ " << top_element << " ]";
    }
    std::stack<int> s1(mStack);
    std::cout << "\nultimo elemento da copia s: " << s1.top() << "\n" << std::endl;
    
    //-----------------------------------------------
    
    std::cout << pink;
    MutantStack<int> emptyStack;
    emptyStack.push(52);
    emptyStack.push(36);
    emptyStack.push(89);
    emptyStack.push(100);
    
    MutantStack<int>::iterator it1 = emptyStack.begin();
    
    while (it1 !=  emptyStack.end())
    {
        std::cout << "[ "<< *it1 << " ]";
        ++it1;
    }
    std::cout << std::endl;
    
    std::cout << "removed " << std::endl;
    std::cout << "removed " << std::endl;
    std::cout << "removed " << std::endl;
    std::cout << "removed " << std::endl;
    
    emptyStack.pop();
    emptyStack.pop();
    emptyStack.pop();
    emptyStack.pop();

    if (emptyStack.empty()){
        std::cout << red;
        std::cout << "empty stack" << std::endl;
    }
    

    //stack -------
    std::cout << pink << "\n\n";
    std::stack<int> emptyStack1;

    emptyStack1.push(52);
    emptyStack1.push(36);
    emptyStack1.push(89);
    emptyStack1.push(100);

    std::stack<int> copyStack1 = emptyStack1;
    
    while (!copyStack1.empty()) {
        int top_element = copyStack1.top();
        copyStack1.pop();
        std::cout << "[ " << top_element << " ]";
    }
    
    std::cout << std::endl;
    std::cout << "removed " << std::endl;
    std::cout << "removed " << std::endl;
    std::cout << "removed " << std::endl;
    std::cout << "removed " << std::endl;
    
    emptyStack1.pop();
    emptyStack1.pop();
    emptyStack1.pop();
    emptyStack1.pop();
    
    if (emptyStack1.empty()){
        std::cout << red;
        std::cout << "empty stack" << std::endl;
    }
    std::cout << reset;
    return 0;
}
