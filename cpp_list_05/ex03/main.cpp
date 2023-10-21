/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:45:25 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 11:11:29 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
    
    Intern intern;

    Bureaucrat bureaucrat1("John", 1);
    Bureaucrat bureaucrat2("Alice", 150);

    AForm *shrubberyForm = intern.makeForm("shrubbery creation", "Garden");
    AForm *robotomyForm = intern.makeForm("robotomy rgdfgequest", "Bender");
    AForm *pardonForm = intern.makeForm("presidential pardon", "Zoidberg");

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


    return 0;
}





// #include "Bureaucrat.hpp"
// #include "AForm.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

// int main() {
//     try {
//         Bureaucrat bureaucrat("Alice", 100);
//         AForm *shrubberyForm = new ShrubberyCreationForm("Garden");
//         AForm *robotomyForm = new RobotomyRequestForm("Bender");
//         AForm *pardonForm = new PresidentialPardonForm("Zoidberg");

//         bureaucrat.signForm(*shrubberyForm);
//         bureaucrat.signForm(*robotomyForm);
//         bureaucrat.signForm(*pardonForm);

//         std::cout << bureaucrat << std::endl;
//         std::cout << *shrubberyForm << std::endl;
//         std::cout << *robotomyForm << std::endl;
//         std::cout << *pardonForm << std::endl;

//         bureaucrat.executeForm(*shrubberyForm);
//         bureaucrat.executeForm(*robotomyForm);
//         bureaucrat.executeForm(*pardonForm);

//         delete shrubberyForm;
//         delete robotomyForm;
//         delete pardonForm;
//     } catch (const std::exception &e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//     }

//     return 0;
// }
