/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:42 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/22 15:07:36 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon*		club;
		
	public:
		HumanA(std::string newName, Weapon* newClub);
		void	setWeapon(Weapon club);
		void	attack();
		~HumanA();
};
