/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:12:28 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/25 13:58:21 by rleslie-         ###   ########.fr       */
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

	public:
		ScalarConverter(void);
		~ScalarConverter(void);

		static void		convert(const std::string &input);
};

#endif
