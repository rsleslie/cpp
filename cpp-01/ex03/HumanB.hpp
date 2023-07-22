/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:59:31 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/22 15:09:42 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon* 		club;
		
	public:
		HumanB(std::string name);
		void	setName(std::string name);
		void	setWeapon(Weapon &club);
		void	attack();
		~HumanB();
};
