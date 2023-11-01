/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:47:19 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/23 13:04:07 by rleslie-         ###   ########.fr       */
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

void    Bureaucrat::increaseTheGrade(void){
    if (grade > 1)
        grade--;
    else
        throw GradeTooHighException();
}

void    Bureaucrat::decreaseTheGrade(void){
    if (grade < 150)
        grade++;
    else
        throw GradeTooLowException();
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

void Bureaucrat::signForm(AForm& form) const{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}catch (const std::exception& e){
		std::cout << name << "  couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) {
    try {
        form.execute(*this); // Chama o método execute da classe Form passando o Bureaucrat como executor
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    } catch (const std::exception & e) {
        std::cerr << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade Too High!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade Too Low!";
}
