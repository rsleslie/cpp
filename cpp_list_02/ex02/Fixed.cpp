/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:45:10 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/10 03:18:07 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int value) : value(value << fractionalBits) {}

Fixed::Fixed(const float value) : value(roundf(value * (1 << fractionalBits))) {}

Fixed::Fixed(const Fixed& other) : value(other.value) {}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->value = other.value;
    }
    return *this;
}

int Fixed::toInt() const {
    return value >> fractionalBits;
}

float Fixed::toFloat() const {
    return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(const int raw) {
    value = raw;
}

// comparasion

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& other) const {
    return value > other.value;
}

bool Fixed::operator<(const Fixed& other) const {
    return value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
    return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return value != other.value;
}

//aruthmetic

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(static_cast<float>(value + other.value) / (1 << fractionalBits));
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(static_cast<float>(value - other.value) / (1 << fractionalBits));
}

Fixed   Fixed::operator*( const Fixed &other ) const {
    return Fixed( this->toFloat() * other.toFloat() );
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other.value == 0)
        std::runtime_error("Division by zero");
    return Fixed(static_cast<float>(value) / other.value);
}


//increment

Fixed& Fixed::operator++() {
    value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    value++;
    return temp;
}

Fixed& Fixed::operator--() {
    value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    value--;
    return temp;
}

// max and min

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}
