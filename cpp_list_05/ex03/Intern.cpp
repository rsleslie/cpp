/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:51:38 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 16:19:37 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){}

Intern::Intern(const Intern& other){
	*this = other;
}

Intern &Intern::operator=(const Intern &other) {
	(void)other;
	return *this;
}

Intern::~Intern(void){}

int		getIndex(std::string name){
	
	int index = -1;

	std::string _name[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++){
		if (_name[i] == name)
			return (i);
	}
	return (index);
}

AForm* Intern::makeForm(const std::string &name, const std::string &target) {
   
	AForm	*newForm = 0;
	int		index = getIndex(name);
	
	switch (index)
	{
		case 0:
			newForm = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << name << std::endl;
			break;
		case 1:
			newForm = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << name << std::endl;
			break;
		case 2:
			newForm = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << name << std::endl;
			break;
		default:
			std::cout << "Intern doesn't know how to create a form named " << name << std::endl;
			break;
	}
	return newForm;
}
