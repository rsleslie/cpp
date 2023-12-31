/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:53:51 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/12 16:02:25 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	// ------------------ COR ---------------------
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	const std::string pink = "\033[1;35m";
	//---------------------------------------------
	
	std::cout << bold << yellow;
	
	const int numAnimals = 6;
    Animal* animals[numAnimals];
	const Animal* j = new Dog();
    const Animal* k = new Cat();
    
	
	std::cout << blue;
	
    for (int i = 0; i < numAnimals / 2; i++) {
        animals[i] = new Dog(*dynamic_cast<const Dog*>(j));
		// animals[i]->makeSound();
    }
	
	std::cout << pink;
	
    for (int i = numAnimals / 2; i < numAnimals; i++) {
		animals[i] = new Cat(*dynamic_cast<const Cat*>(k));
    }
	
	std::cout << green;
	
    for (int i = 0; i < numAnimals; i++) {
        delete animals[i];
    }
	
	std::cout << reset;
	delete j;
    delete k;
	
	return 0;
}



