/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:53:51 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/12 16:14:25 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	// ------------------ COR ---------------------
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	//---------------------------------------------
	
	std::cout << bold << yellow;
	
    // const Animal* animals;
	const Dog* j = new Dog();
    const Cat* k = new Cat();
    
	
	std::cout << blue;
	
	delete j;
    delete k;
	std::cout << reset;
	
	return 0;
}



