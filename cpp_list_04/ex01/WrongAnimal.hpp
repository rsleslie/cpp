/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:14:30 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/11 21:13:20 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
		
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string name);
		WrongAnimal(const WrongAnimal& other);
		~WrongAnimal(void);

		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif