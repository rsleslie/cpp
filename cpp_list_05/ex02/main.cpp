/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:45:25 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 10:01:41 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    // Crie um Bureaucrat
    Bureaucrat bureaucrat("Alice", 50);

    // Crie um ShrubberyCreationForm com grau de assinatura 145 e grau de execução 137
    ShrubberyCreationForm shrubberyForm("Garden");

    // Crie um RobotomyRequestForm com grau de assinatura 72 e grau de execução 45
    RobotomyRequestForm robotomyForm("Bender");

    // Crie um PresidentialPardonForm com grau de assinatura 25 e grau de execução 5
    PresidentialPardonForm pardonForm("Zoidberg");

    try {
        // Tente assinar e executar os formulários
        bureaucrat.signForm(shrubberyForm);
        bureaucrat.executeForm(shrubberyForm);

        bureaucrat.signForm(robotomyForm);
        bureaucrat.executeForm(robotomyForm);

        bureaucrat.signForm(pardonForm);
        bureaucrat.executeForm(pardonForm);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
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
