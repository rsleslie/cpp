/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:53:51 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/11 21:08:38 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	// ------------------ COR ---------------------
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	
	// ----------------------- TEST -----------------------
	std::cout << green << std::endl;
	
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << blue << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << green;
	
	delete j;
	delete i;
	delete meta;

	//--------------------------WRONG TEST -----------------------
	
	std::cout << bold << red << "\nWithout Virtual\n"  << yellow << std::endl;
	
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *c = new WrongCat();
	
	std::cout << c->getType() << " " << blue << std::endl;
	
	c->makeSound();
	wrong->makeSound();
	std::cout << yellow;
	
	delete c;
	delete wrong;
	std::cout << reset;
	return 0;
}