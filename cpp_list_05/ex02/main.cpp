/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:45:25 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 16:24:34 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
  
    Bureaucrat bureaucrat("Alice", 30);

    // ssinatura 145 e grau de execução 137
    ShrubberyCreationForm shrubberyForm("Garden");

    // ssinatura 72 e grau de execução 45
    RobotomyRequestForm robotomyForm("Bender");

    // 25 e grau de execução 5
    PresidentialPardonForm pardonForm("Zoidberg");

    try 
    {
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
