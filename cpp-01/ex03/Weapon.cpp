/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:17:49 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 19:15:42 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t){
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->type = type;	
}

const std::string	Weapon::getType()
{
	return this->type;
}
