/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:17:19 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/11 19:38:40 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Dog class constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
    std::cout << "Copy constructor called" << std::endl;
}

Dog::~Dog(void){
	std::cout << "Dog class destructor called" << std::endl;
}

void	Dog::makeSound(void) const{
	std::cout << "Au Au" << std::endl;
}
