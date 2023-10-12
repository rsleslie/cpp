/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:26:18 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/11 21:04:36 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrongcat"){
	std::cout << "WrongCat class constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat class destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const{
	std::cout << "Miau Miau" << std::endl;	
}
