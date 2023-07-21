/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:17:12 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/21 14:22:07 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name);
		zombie[i].announce();
	}
	return (zombie);
}
