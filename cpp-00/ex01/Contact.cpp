/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:33:34 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/18 17:44:15 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::pass_parameter(Contact& contact)
{
	std::cout << "Enter the name: ";
	getline(std::cin, contact.Name);
	
	std::cout << "Enter the last name: ";
	getline(std::cin, contact.LastName);

	std::cout << "Enter the nickname: ";
	getline(std::cin, contact.Nickname);

	std::cout << "Enter the phone number: ";
	getline(std::cin, contact.Phone_number);

	std::cout << "Enter the darkest secret: ";
	getline(std::cin, contact.Darkest_secret);
	
	std::cout << std::endl;
}
