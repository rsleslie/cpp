/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:51:38 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 11:05:46 by rleslie-         ###   ########.fr       */
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


AForm* Intern::makeForm(const std::string &name, const std::string &target) {
   
    AForm *newForm = 0;

    if (name == "shrubbery creation") {
        newForm = new ShrubberyCreationForm(target);
        std::cout << "Intern creates " << name << std::endl;
    } else if (name == "robotomy request") {
        newForm = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << name << std::endl;
    } else if (name == "presidential pardon") {
        newForm = new PresidentialPardonForm(target);
        std::cout << "Intern creates " << name << std::endl;
    } else {
        std::cout << "Intern doesn't know how to create a form named " << name << std::endl;
    }

    return newForm;
}
