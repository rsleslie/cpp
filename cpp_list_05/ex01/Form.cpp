/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:35:03 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/22 10:27:30 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(void) : name(""), signGrade(0), executeGrade(0){}

Form::Form(const std::string n, const int sigGrade, const int execGrade) : name(n), signGrade(sigGrade), executeGrade(execGrade){
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

Form::Form(const Form& other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade) {}

Form::~Form(void){}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= signGrade) {
		isSigned = true;
	} else {
		isSigned = false;
		throw GradeTooLowException();
	}
}

const std::string&	Form::getName() const{
	return name;
}

bool	Form::getIsSigned() const{
	return isSigned;
}

int	Form::getSignGrade() const{
	return signGrade;
}

int	Form::getExecuteGrade() const{
	return executeGrade;
}

Form& Form::operator=(const Form& other){
	if (this != &other){
		isSigned = other.isSigned;
	}
	return *this;
}

const char* Form::GradeTooHighException::what() const throw(){
	return "Grade is too High for this form";
}

const char* Form::GradeTooLowException::what() const throw(){
	return "Grade is too low for this form";
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Form: " << form.getName() << std::endl;
	os << "   Signed: " << (form.getIsSigned() ? "Yes" : "No") << std::endl;
	os << "   Grade to Sign: " << form.getSignGrade() << std::endl;
	os << "   Grade to Execute: " << form.getExecuteGrade() << std::endl;
	return os;
}
