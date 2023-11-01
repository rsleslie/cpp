/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:45:25 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 17:39:36 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {

	//-------------------------------cor-------------------
	const std::string red = "\033[1;31m";
	const std::string green = "\033[1;32m";
	const std::string reset = "\033[0m";
	const std::string bold = "\033[1m";
	const std::string blue = "\033[34m";
	const std::string yellow = "\033[33m";
	const std::string pink = "\033[1;35m";
	//---------------------------------end cor----------------------------
	
	std::cout << bold;
    
	try {
		//assina os dois formularios
        Bureaucrat bureaucrat1("John", 1);
        Bureaucrat bureaucrat2("Alice", 140);

        Form form1("Form1", 1, 120);
        Form form2("Form2", 145, 15);

		std::cout <<  blue;
        bureaucrat1.signForm(form1);
		std::cout << yellow;
        bureaucrat2.signForm(form2);

		std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cout << red;
		std::cerr << "Error: " << e.what() << std::endl;
		std::cout << std::endl;

    }

	try {		
        Bureaucrat bureaucrat1("John", 1);
        Bureaucrat bureaucrat2("Alice", 149);

        Form form1("Form1", 1, 120);
        Form form2("Form2", 145, 15);

		std::cout <<  blue;
        bureaucrat1.signForm(form1);
		std::cout << yellow;
        bureaucrat2.signForm(form2);

		std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cout << red;
		std::cerr << "Error: " << e.what() << std::endl;
		std::cout << std::endl;

    }

	try {
        Bureaucrat bureaucrat1("John", 1);
        Bureaucrat bureaucrat2("Alice", 140);

        Form form1("Form1", 1, 152);
        Form form2("Form2", 145, 15);

		std::cout <<  blue;
        bureaucrat1.signForm(form1);
		std::cout << yellow;
        bureaucrat2.signForm(form2);

		std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cout << red;
		std::cerr << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
    }
	

	try {
        Bureaucrat highGradeBureaucrat("John", 1);
        Bureaucrat bureaucrat2("Alice", 140);

        Form form1("Form1", 1, 0);
        Form form2("Form2", 145, 15);

		std::cout <<  blue;
        highGradeBureaucrat.signForm(form1);
		std::cout << yellow;
        bureaucrat2.signForm(form2);

		std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cout << red;
		std::cerr << "Error: " << e.what() << std::endl;
		std::cout << std::endl;

    }
	
	try {
        Bureaucrat highGradeBureaucrat("John", 0);
        Bureaucrat bureaucrat2("Alice", 140);

        Form form1("Form1", 1, 5);
        Form form2("Form2", 145, 15);

		std::cout <<  blue;
        highGradeBureaucrat.signForm(form1);
		std::cout << yellow;
        bureaucrat2.signForm(form2);

		std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cout << red;
		std::cerr << "Error: " << e.what() << std::endl;
		std::cout << std::endl;

    }

	std::cout << reset;
	return (0);
}
