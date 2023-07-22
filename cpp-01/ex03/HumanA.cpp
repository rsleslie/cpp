/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:03:24 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/22 15:07:43 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << this->club->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon club)
{
	this->club = &club;
}

HumanA::HumanA(std::string newName, Weapon* newClub) : name(newName), club(newClub){
}

HumanA::~HumanA()
{
}
