/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:03:27 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 10:37:41 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this == &other) {
        return *this;
    }
    AForm::operator=(other);
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (getIsSigned()) {
        throw FormNotSignedException();
    }

    if (executor.getGrade() > getExecuteGrade()) {
        throw GradeTooLowException();
    }

    std::string filename = getTarget() + "_shrubbery";
    std::ofstream outfile(filename.c_str());

    outfile << "      _-_\n"
            << "   /~~   ~~\\ \n"
            << "/~~         ~~\\\n"
            << "{                   }\n"
            << " \\  _-     -_  /\n"
            << "   ~  \\\\ //  ~\n"
            << "_- -  | | _- _\n"
            <<  "  _ - | |   -_\n"
            << "      // \\\\ ";
    outfile.close();
}

std::string ShrubberyCreationForm::getTarget(void) const{
    return target;
}
