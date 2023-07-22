/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:15:08 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/22 14:59:30 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string	type;
		
	public:
		Weapon(std::string type);
		const std::string&	getType();
		void				setType(std::string type);
		~Weapon();
};

#endif