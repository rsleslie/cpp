/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:01:17 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 19:30:30 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->club->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& club)
{
	this->club = &club;
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

HumanB::HumanB(std::string newName) : name(newName), club()
{
}


HumanB::~HumanB()
{
}
