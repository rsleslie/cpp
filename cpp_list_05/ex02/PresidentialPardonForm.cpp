/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:57:24 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 16:35:22 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this == &other) {
		return *this;
	}
	AForm::operator=(other);
	return *this;
}

std::string PresidentialPardonForm::getTarget(void) const{
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!getIsSigned()) {
		throw FormNotSignedException();
	}

	if (executor.getGrade() > getExecuteGrade()) {
		throw GradeTooLowException();
	}

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const char* PresidentialPardonForm::FormNotSignedException::what() const throw(){
	return "Form is not signed.";
}
