/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:14:56 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/20 15:29:11 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	std::string	line;
	Contact contact;
	Phonebook phone;
	std::string name;
    while (1)
	{
		std::cout << "Phonebook, do you want to ADD contact, SEARCH for contact or EXIT: ";
		getline(std::cin, line);
		if (line == "ADD")
		{
			contact.pass_parameter(contact);
			phone.add(contact);
		}
		else if (line == "SEARCH")
		{
			std::cout << "Enter the name: ";
			getline(std::cin, name);
			phone.search(name);	
		}
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Command not found" << std::endl;
	}
	return (0);
}