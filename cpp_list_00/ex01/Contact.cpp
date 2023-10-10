/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:25:48 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 14:19:41 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include  <sstream>

Contact::Contact()
{
	
}

std::string    Contact::getFistName()
{
	return (this->first_name);
}

std::string	Contact::getLastName()
{
	return (this->last_name);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

std::string	Contact::getDarkest()
{
	return (this->dark_secrect);
}

long long int	Contact::getNumber()
{
	return (this->phone_number);
}

void    Contact::setFirtName()
{
	std::string name;

	std::cout << "what is the first name" << std::endl;
	getline(std::cin, name);		
	this->first_name = name;
}

void	Contact::setLastName()
{
	std::string name;

	std::cout << "what is the last name" << std::endl;
	getline(std::cin, name);
	this->last_name = name;
}

void	Contact::setNickname()
{
	std::string name;

	std::cout << "what is the nickname" << std::endl;
	getline(std::cin, name);
	this->nickname = name;;
}

void	Contact::setDarkestsecrect()
{
	std::string name;

	std::cout << "what is your dark secret" << std::endl;
	getline(std::cin, name);
	this->dark_secrect = name;
}

bool	Contact::setPhoneNumber()
{
	long long int         number;
	std::string	name;

	std::cout << "what is your phone number" << std::endl;
	getline(std::cin, name);
	std::istringstream iss(name);
	iss >> number; 
	if (!iss.fail())
	{
		this->phone_number = number;
		return (true);
	}
	else
	{
        std::cerr << "invalid number" << std::endl;
		return (false);
	}
}

Contact::~Contact() {

}
