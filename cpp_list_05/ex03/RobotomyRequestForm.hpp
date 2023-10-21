/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:02:54 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/21 10:39:04 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>
#include <cstdlib>

class RobotomyRequestForm : public AForm {
	private:
		const std::string	target;

	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

        class FormNotSignedException : public std::exception {
            public:
                const char* what() const throw() {
                    return "Form is not signed.";
                }
        };

		void execute(const Bureaucrat &executor) const;
        std::string getTarget(void) const;
};

#endif
