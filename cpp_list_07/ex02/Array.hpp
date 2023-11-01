/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:55:43 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/01 14:45:57 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

// #include <exception>

template <typename T>
class Array {
	private:
		T* data;
		unsigned int length;
		
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array<T>& other);
		Array& operator=(const Array<T>& other);
		~Array();

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		unsigned int size() const;
};

#include "Array.tpp"

#endif
