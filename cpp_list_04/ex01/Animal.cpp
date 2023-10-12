/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:07:08 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/11 21:03:40 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(void) : type(""){
    std::cout << "Animal class constructor called" << std::endl;
}

Animal::Animal(const std::string name) : type(name){
    std::cout << "Animal class constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Copy constructor called" << std::endl;
}

Animal::~Animal(void){
    std::cout << "Animal class destructor called" << std::endl;
}

void	Animal::makeSound(void) const{
	std::cout << "Animal makes sound" << std::endl;
}

std::string	Animal::getType(void) const{
	return this->type;
}