/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:52:31 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 16:39:45 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"

AForm::AForm(void) : name(""), signGrade(0), executeGrade(0){}

AForm::AForm(const std::string n, const int sigGrade, const int execGrade) : name(n), signGrade(sigGrade), executeGrade(execGrade){
	if (executeGrade < 1) {
		throw GradeTooHighException();
	} else if (executeGrade > 150) {
		throw GradeTooLowException();
	}
	if (signGrade < 1) {
		throw GradeTooHighException();
	} else if (signGrade > 150) {
		throw GradeTooLowException();
	}
}

AForm::AForm(const AForm& other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade) {}

AForm::~AForm(void){}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= signGrade) {
        isSigned = true;
    } else {
		isSigned = false;
        throw GradeTooLowException();
    }
}

const std::string&	AForm::getName() const{
	return name;
}

bool	AForm::getIsSigned() const{
	return isSigned;
}

int	AForm::getSignGrade() const{
	return signGrade;
}

int	AForm::getExecuteGrade() const{
	return executeGrade;
}

AForm& AForm::operator=(const AForm& other){
	if (this != &other){
		isSigned = other.isSigned;
	}
	return *this;
}

const char* AForm::GradeTooHighException::what() const throw(){
	return "Grade is too High for this Aform";
}

const char* AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low for this form";
}
