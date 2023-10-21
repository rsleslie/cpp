/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:45:25 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 16:24:14 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    
    Intern intern;

    Bureaucrat bureaucrat1("bureaucrat1", 1);
    Bureaucrat bureaucrat2("bureaucrat2", 150);

    AForm *shrubberyForm = intern.makeForm("shrubbery creation", "form1");
    AForm *robotomyForm = intern.makeForm("robotomy request", "form2");
    AForm *pardonForm = intern.makeForm("presidential pardon", "form3");

    bureaucrat1.signForm(*shrubberyForm);
    bureaucrat1.signForm(*robotomyForm);
    bureaucrat1.signForm(*pardonForm);

    bureaucrat2.signForm(*shrubberyForm);
    bureaucrat2.signForm(*robotomyForm);
    bureaucrat2.signForm(*pardonForm);

    bureaucrat1.executeForm(*shrubberyForm);
    bureaucrat1.executeForm(*robotomyForm);
    bureaucrat1.executeForm(*pardonForm);

    bureaucrat2.executeForm(*shrubberyForm);
    bureaucrat2.executeForm(*robotomyForm);
    bureaucrat2.executeForm(*pardonForm);

    if (shrubberyForm != 0) {
         delete shrubberyForm;
    }
    if (robotomyForm != 0) {
        delete robotomyForm;
    }
    if (pardonForm != 0) {
        delete pardonForm;
    }

    std::cout << std::endl;

    ///-------------------

     Bureaucrat bureaucrat3("bureaucrat3", 1);


    AForm *testError = intern.makeForm("error", "formError");

    if (testError != 0)
        bureaucrat3.signForm(*testError);

    if (testError != 0)
        bureaucrat3.signForm(*testError);

    if (testError != 0)
        delete shrubberyForm;


    return 0;
}
