/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:36:40 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/18 18:50:18 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::search(std::string& contact)
{
	for (int i = 0; i < 8; i++)
	{
		if (contact_list[i].Name == contact)
		{
			std::cout << "Name: " << contact_list[i].Name << " ";
			std::cout << "Last name: " << contact_list[i].LastName << " ";
			std::cout << "Nickname: " << contact_list[i].Nickname << " ";
			std::cout << "Phone number: " << contact_list[i].Phone_number << " ";
			std::cout << "Darkest secret: " << contact_list[i].Darkest_secret << std::endl;
			return ;			
		}
	}
	std::cout << "Name not found." << std::endl;
}

void	Phonebook::add(Contact& contact)
{
	if (n_contacts < 8)
	{
		contact_list[n_contacts] = contact;
		n_contacts++;
	}
	if (n_contacts == 8)
		n_contacts = 0;
}