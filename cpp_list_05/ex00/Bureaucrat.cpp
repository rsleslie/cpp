/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:47:19 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 16:21:25 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("") {}

Bureaucrat::Bureaucrat(const std::string n, int g) : name(n){	
		if (g < 1) {
			throw GradeTooHighException();
		} else if (g > 150) {
			throw GradeTooLowException();
		}
		this->grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade) {}

Bureaucrat::~Bureaucrat(void){}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade Too High!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade Too Low!";
}

void	Bureaucrat::decreaseTheGrade(void){
	if (grade > 1)
		grade--;
	else
		throw GradeTooLowException();
}

void	Bureaucrat::increaseTheGrade(void){
	if (grade < 150)
		grade++;
	else
		throw GradeTooHighException();
}

std::string	Bureaucrat::getName(void) const{
	return name;
}

int	Bureaucrat::getGrade(void) const{
	return grade;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ",  bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

