/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:35:03 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/18 15:39:56 by rleslie-         ###   ########.fr       */
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

/*
#ifndef FORM_H
#define FORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;  // Declarando a classe Bureaucrat antecipadamente

class Form {
public:
    Form(const std::string& name, int signGrade, int executeGrade);
    Form(const Form& other);
    ~Form();

    const std::string& getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    void beSigned(const Bureaucrat& bureaucrat);

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };

    Form& operator=(const Form& other);

    virtual void execute(const Bureaucrat& executor) const;

private:
    const std::string name;
    bool isSigned;
    const int signGrade;
    const int executeGrade;
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif

#include "Form.h"
#include "Bureaucrat.h"

Form::Form(const std::string& name, int signGrade, int executeGrade)
    : name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade) {
    if (signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form& other)
    : name(other.name), isSigned(other.isSigned), signGrade(other.signGrade), executeGrade(other.executeGrade) {}

Form::~Form() {}

const std::string& Form::getName() const {
    return name;
}

bool Form::getIsSigned() const {
    return isSigned;
}

int Form::getSignGrade() const {
    return signGrade;
}

int Form::getExecuteGrade() const {
    return executeGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= signGrade)
        isSigned = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high for this form.";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low for this form.";
}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        isSigned = other.isSigned;
    }
    return *this;
}

void Form::execute(const Bureaucrat& executor) const {
    if (!isSigned)
        std::cout << executor.getName() << " couldn't execute " << name << " because it's not signed." << std::endl;
    else if (executor.getGrade() > executeGrade)
        throw GradeTooLowException();
    else
        std::cout << executor.getName() << " executes " << name << "." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
    out << "Form: " << form.getName() << ", Sign Grade: " << form.getSignGrade() << ", Execute Grade: " << form.getExecuteGrade() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No");
    return out;
}

*/

/*

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.h"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

    virtual void execute(const Bureaucrat& executor) const;

private:
    const std::string target;
};

#endif
#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : Form("Shrubbery Creation Form", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : Form(other), target(other.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        Form::operator=(other);
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned()) {
        std::cout << executor.getName() << " couldn't execute " << getName() << " because it's not signed." << std::endl;
        return;
    }

    std::string filename = target + "_shrubbery";
    std::ofstream outputFile(filename.c_str());
    if (!outputFile) {
        std::cerr << "Failed to create file: " << filename << std::endl;
        return;
    }

    outputFile << "ASCII Art of a shrubbery..." << std::endl;
    outputFile.close();

    std::cout << executor.getName() << " executes " << getName() << "." << std::endl;
}


*/

/*
#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.h"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    virtual void execute(const Bureaucrat& executor) const;

private:
    const std::string target;
};

#endif
#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("Robotomy Request Form", 72, 45), target(target) {
    std::srand(std::time(0)); // Seed the random number generator
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm&

*/