/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:54:30 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/11 21:03:50 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>


class Animal
{
	protected:
		std::string type;
		
	public:
		Animal(void);
		Animal(const std::string name);
		Animal(const Animal& other);
		virtual ~Animal(void);
		
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif