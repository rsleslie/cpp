/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:44:07 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/25 15:52:50 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : value(0){}

Data::Data(int _value) : value(_value) {}

Data::~Data(){}

int Data::getValue() const{
    return value;
}
