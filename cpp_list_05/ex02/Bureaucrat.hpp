/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:35:44 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 16:26:30 by rleslie-         ###   ########.fr       */
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
			const char* what(void) const throw();
		};

		class GradeTooHighException : public std::exception{
			public:
			const char* what(void) const throw();
		};

		void executeForm(AForm const & form);
		
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
