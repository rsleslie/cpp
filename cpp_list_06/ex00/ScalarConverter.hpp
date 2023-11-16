/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:12:28 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/25 15:42:41 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <limits>

class ScalarConverter
{
	private:
		static void convertType(const double n, int type);
		static void convertType(const char c);

		ScalarConverter(void);

	public:
		~ScalarConverter(void);

		static void		convert(const std::string &input);
};

#endif
