/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:52:07 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 11:06:19 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <exception>

class Bureaucrat;

class AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			executeGrade;
	
	public:
		AForm(void);
		AForm(const std::string n, const int sigGrade, const int execGrade);
		AForm(const AForm& other);
		virtual ~AForm(void);
		

		const std::string&	getName() const;
		bool 				getIsSigned() const;
		int 				getSignGrade() const;
		int 				getExecuteGrade() const;
		void				beSigned(const Bureaucrat& bureaucrat);

		AForm& operator=(const AForm& other);
	
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw();
		};

		virtual void		execute(const Bureaucrat &executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& form);

#endif
