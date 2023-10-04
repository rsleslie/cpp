/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:42 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 19:26:12 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon&		club;
		
	public:
		HumanA(std::string n, Weapon& c);
		void	setWeapon(Weapon club);
		void	attack();
		~HumanA();
};
