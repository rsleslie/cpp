/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:04:28 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/16 12:22:39 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>
#include <sstream>
#include <iostream>

class RPN
{
	private:
		std::stack<int> numbers;

	public:
		RPN(void);
		RPN(const RPN& other);
		RPN&	operator=(const RPN& other);
		~RPN();

		void	calculator(char *str);
};

#endif