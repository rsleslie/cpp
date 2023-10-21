/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:45:25 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/17 15:38:52 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

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

	try
	{
		std:: cout << green << bold << "TESTE JOSE" << std::endl;
		
		Bureaucrat bureaucrat("José", 75);
		std::cout << bureaucrat << std::endl;

		bureaucrat.decreaseTheGrade();
		std::cout << bureaucrat << std::endl;

		bureaucrat.increaseTheGrade();
		std::cout << bureaucrat << std::endl;

		std::cout << std::endl;
		
	} catch (const std::exception& e) {
		
		std:: cout << red;

		std::cerr << "Erro: " << e.what() << std::endl;
		std::cout << std::endl;
	}
	
	try 
	{
		
		std:: cout << blue << "TESTE MARIA" << std::endl;
		Bureaucrat bureaucrat2("Maria", 0);
		std::cout << std::endl;
			
	} catch (const std::exception& e) {
		
		std:: cout << red;
		
		std::cerr << "Erro: " << e.what() << std::endl;
		std::cout << std::endl;
	}

	try 
	{
		std:: cout << yellow << "ESTE EDUARDA" << std::endl;
		Bureaucrat bureaucrat3("Eduarda", 156);

	} catch (const std::exception& e) {
		std:: cout << red;
		std::cerr << "Erro: " << e.what() << std::endl;

		std::cout << std::endl;
	}
	

	
	try 
	{
		
		std:: cout << pink << "TESTE RANNA" << std::endl;
		Bureaucrat bureaucrat4("Ranna", 2);
		std::cout << bureaucrat4 << std::endl;
		
		
		bureaucrat4.decreaseTheGrade();
		std::cout << bureaucrat4 << std::endl;
		
		bureaucrat4.decreaseTheGrade();
		std::cout << bureaucrat4 << std::endl;
		std::cout << std::endl;
			
	} catch (const std::exception& e) {
		std:: cout << red;
		std::cerr << "Erro: " << e.what() << std::endl;
		std::cout << std::endl;
	}


	try 
	{
		std:: cout << blue << "TESTE ALGUM NOME" << std::endl;
		
		Bureaucrat bureaucrat5("algum nome", 149);
		std::cout << bureaucrat5 << std::endl;
		
		
		bureaucrat5.increaseTheGrade();
		std::cout << bureaucrat5 << std::endl;
		
		bureaucrat5.increaseTheGrade();
		std::cout << bureaucrat5 << std::endl;
		std::cout << std::endl;
			
	} catch (const std::exception& e) {
		std:: cout << red;
		std::cerr << "Erro: " << e.what() << std::endl;
		std::cout << std::endl;
	}
	
	std:: cout << reset;
	
	return 0;
}
