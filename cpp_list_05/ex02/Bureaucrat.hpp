/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:35:44 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 10:36:21 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class	Bureaucrat{
	private:
		const std::string	name;
		int					grade;
		
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string n, int g);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		decreaseTheGrade(void);
		void		increaseTheGrade(void);
		void		signForm(AForm& form) const;

		class GradeTooLowException : public std::exception {
		public:
			const char* what(void) const throw(){
				return "Grade Too Low!";
			};
		};

		class GradeTooHighException : public std::exception{
			public:
			const char* what(void) const throw(){
				return "Grade Too High!";
			};
		};

		void executeForm(AForm const & form);
		
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif

/*
#include "Bureaucrat.h"
#include "Form.h" // Certifique-se de incluir o arquivo de cabeçalho da classe Form

// ...

void Bureaucrat::signForm(Form& form) const {
    try {
        form.beSigned(*this);
        std::cout << name << " signs " << form.getName() << std::endl;
    } catch (const std::exception& e) {
        std::cout << name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

// ...
*/