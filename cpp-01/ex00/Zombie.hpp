/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:43:00 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/21 14:25:28 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string name;
		
	public:
		Zombie();
		void	announce(void);
		void	setName(std::string name);
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif