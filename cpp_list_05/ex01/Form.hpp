/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:34:56 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/18 15:29:52 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			executeGrade;
	
	public:
		Form(void);
		Form(const std::string n, const int sigGrade, const int execGrade);
		Form(const Form& other);
		~Form(void);
		

		const std::string&	getName() const;
		bool 				getIsSigned() const;
		int 				getSignGrade() const;
		int 				getExecuteGrade() const;
		void				beSigned(const Bureaucrat& bureaucrat);

		Form& operator=(const Form& other);
	
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw();
		};

};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
