/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:03:51 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/11 21:01:06 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
    std::cout << "Cat class constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
	std::cout << "Copy constructor called" << std::endl;
}

Cat::~Cat(void){
	std::cout << "Cat class destructor called" << std::endl;
}

void	Cat::makeSound(void) const{
	std::cout << "Miau Miau" << std::endl;
}
