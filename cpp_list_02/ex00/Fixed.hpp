/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:24:38 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/09 23:56:53 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef FIXED_HPP
// # define FIXED_HPP

// #include <iostream>

// class Fixed {
// private:
// 	int numberValue;
// 	static const int numberFractional = 8;

// public:
// 	Fixed(void);
// 	Fixed(const Fixed& fixed1);
// 	Fixed& operator=(const Fixed& fixed1);

// 	int getRawBits(void) const;
// 	void setRawBits(int const raw);

// 	~Fixed();
// };

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed& other);
    ~Fixed();
    
    Fixed& operator=(const Fixed& other);

    int getRawBits() const;
    void setRawBits(int const raw);
};

#endif
