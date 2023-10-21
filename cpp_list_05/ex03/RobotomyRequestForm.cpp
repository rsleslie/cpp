/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:03:06 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 10:37:48 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
    : AForm(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this == &other) {
        return *this;
    }
    AForm::operator=(other);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (getIsSigned()) {
        throw FormNotSignedException();
    }

    if (executor.getGrade() > getExecuteGrade()) {
        throw GradeTooLowException();
    }

    std::cout << "*drilling noises*" << std::endl;

    // Use a random number generator to determine success (50% chance)
    if (std::rand() % 2 == 0) {
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    } else {
        std::cout << "Robotomy of " << getTarget() << " failed." << std::endl;
    }
}

std::string RobotomyRequestForm::getTarget(void) const{
    return target;
}