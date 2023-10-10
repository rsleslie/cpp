/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:24:38 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/10 00:50:38 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int					value;
	static const int	fractionalBits = 8;
	
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& other);
	~Fixed();

	Fixed& 		operator=(const Fixed& other);

	int			toInt() const;
	float		toFloat() const;
	int			getRawBits() const;
	void		setRawBits(const int raw);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif

