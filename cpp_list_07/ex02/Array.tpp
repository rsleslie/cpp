/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:55:23 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/01 14:45:39 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(void) : data(NULL), length(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : length(n) {
	data = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T>& other) : length(other.length) {
	data = new T[length];
	for (unsigned int i = 0; i < length; i++) {
		data[i] = other.data[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
	if (this == &other) {
		return *this;
	}
	delete[] data;
	length = other.length;
	data = new T[length];
	for (unsigned int i = 0; i < length; i++) {
		data[i] = other.data[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= length) {
		throw std::out_of_range("Index out of bounds");
	}
	return data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= length) {
		throw std::out_of_range("Index out of bounds");
	}
	return data[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return length;
}
