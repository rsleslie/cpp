/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:46:19 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/25 15:49:44 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
# include <iostream>
# include <ctime>

Base*	generate(void){
	int randValue = rand() % 3;
	if (randValue == 0){
		std::cout << "create A" << std::endl;
		return new A;
	}
	else if (randValue == 1){
		std::cout << "create B" << std::endl;
		return new B;
	}
	else{
		std::cout << "create C" << std::endl;
		return new C;
	}
}

void	identify(Base* p){
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "This pointer A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "This pointer B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "This pointer C" << std::endl;
	else
		std::cout << "without base" << std::endl;
}

void	identify(Base& p){
	Base* isNULL = static_cast<Base*>(&p);
	
	if (isNULL == NULL) {
        std::cout << "Received a null pointer." << std::endl;
        return ;
    }
	try	{
		A& a = dynamic_cast<A&>(p);
        std::cout << "this reference A" << std::endl;
		(void)a;
	}catch(const std::exception& e)	{
		try	{
			B& b = dynamic_cast<B&>(p);
			(void)b;
        	std::cout << "this reference B" << std::endl;
		}catch(const std::exception& e)		{
			try	{
				C& c = dynamic_cast<C&>(p);
        		std::cout << "this reference C" << std::endl;
				(void)c;
			}catch(const std::exception& e)	{
				std::cout << "none of the subclasses" << std::endl;
			}
		}
	}
}

int	main(void){
	std::srand(static_cast<unsigned>(std::time(NULL)));
	
	Base* object = NULL;
    identify(object);
    identify(*object);

    delete object;

    return 0;
}