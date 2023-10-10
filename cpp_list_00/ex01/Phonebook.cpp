/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:31:32 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 14:54:50 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"

void	Phonebook::setNumber()
{
	if (n_contacts == 7)
		this->n_contacts = 0;
	else
	{
		this->n_contacts++;
		if (this->status != 7)
			this->status = this->n_contacts;
	}
	std::cout << this->status << this->n_contacts << std::endl;
} 

int    Phonebook::getNumber()
{
	return (n_contacts);
}

bool	check_spaces_null(std::string name)
{
	if (name.find_first_not_of(" \t") == std::string::npos)
       return (false);
	if (name.empty())
		return (false);
	return (true);	   
}

void	Phonebook::search()
{
	std::string	index;
	int			number;

	for(int i = 0; i <= this->status; i++)
	{
		std::cout << "--------------------" << std::endl;
		std::cout << "index [" << i << "]" <<std::endl;
		if (check_spaces_null(this->contact_list[i].getFistName()))
			std::cout << this->contact_list[i].getFistName() << std::endl;
		if (check_spaces_null(this->contact_list[i].getLastName()))
			std::cout << this->contact_list[i].getLastName() << std::endl;
		if (check_spaces_null(this->contact_list[i].getNickname()))
			std::cout << this->contact_list[i].getNickname() << std::endl;
		std::cout << "--------------------" << std::endl;
	}
	std::cout << "choose a contact: " << std::endl;
	getline(std::cin, index);
	std::istringstream iss(index);
	iss >> number; 
	if (!iss.fail())
	{
		if (number > this->status)
			std::cout << "invalid index" << std::endl;		
		else
		{
			std::cout << "\n--------------------" << std::endl;
			if (check_spaces_null(this->contact_list[number].getFistName()))
				std::cout << this->contact_list[number].getFistName() << std::endl;
			if (check_spaces_null(this->contact_list[number].getLastName()))
				std::cout << this->contact_list[number].getLastName() << std::endl;
			if (check_spaces_null(this->contact_list[number].getNickname()))
				std::cout << this->contact_list[number].getNickname() << std::endl;
			std::cout << this->contact_list[number].getNumber() << std::endl;
			if (check_spaces_null(this->contact_list[number].getDarkest()))
				std::cout << this->contact_list[number].getDarkest() << std::endl;
			std::cout << "--------------------" << std::endl;
		}
	}
	else
        std::cerr << "invalid number" << std::endl;
}

void	Phonebook::add()
{
	contact_list[getNumber()].setFirtName();
	contact_list[getNumber()].setLastName();
	contact_list[getNumber()].setNickname();
	while (1)
	{
		if (contact_list[getNumber()].setPhoneNumber())
			break ;
	}
	contact_list[getNumber()].setDarkestsecrect();
	setNumber();
}

Phonebook::~Phonebook() {
	
}
