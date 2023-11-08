/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:29:20 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 17:13:45 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <vector>

class Span {
	private:
		unsigned int maxSize;
		std::vector<int> numbers;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& other);
		~Span();

		Span&	operator=(const Span& other);

		void				addNumber(int number);
		void				addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
		int					shortestSpan();
		int					longestSpan();
		std::vector<int>	getVector();
};

#endif