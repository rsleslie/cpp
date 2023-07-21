/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radomChump.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:31:56 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/21 14:26:59 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie zombie;
	zombie.setName(name);
	zombie.announce();
}
