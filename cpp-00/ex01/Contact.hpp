/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:34:00 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/18 18:17:18 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
private:
	/* data */
public:
	// Contact(/* args */);
	std::string	Name;
	std::string LastName;
	std::string Nickname;
	std::string Phone_number;
	std::string	Darkest_secret;
	void	pass_parameter(Contact& contac);
	// ~Contact();
};
