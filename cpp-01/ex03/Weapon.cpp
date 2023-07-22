/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:17:49 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/22 14:59:49 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->type = type;	
}

const std::string&	Weapon::getType()
{
	return this->type;
}
