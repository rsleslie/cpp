/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:51:23 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 11:05:51 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "AForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern& other);
	~Intern(void);

	Intern& operator=(const Intern& other);
	
	AForm* makeForm(const std::string &name, const std::string &target);
};

#endif