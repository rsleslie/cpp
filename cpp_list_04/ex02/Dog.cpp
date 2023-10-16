/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:17:19 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/12 14:57:32 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Dog class constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other){
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain(*(other.brain));
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog class destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Au Au" << std::endl;
}
