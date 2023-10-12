/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:14:19 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/11 21:10:48 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type(""){
	std::cout << "WrongAnimal class contructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string name) : type(name){
	std::cout << "WrongAnimal class contructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type){
	std::cout << "Copy constructor called" << std::endl;	
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal class destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal make sound" << std::endl;	
}

std::string	WrongAnimal::getType(void) const{
	return this->type;
}

