/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:30:40 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 17:13:28 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : maxSize(0) {}

Span::Span(unsigned int n) : maxSize(n) {}

Span::Span(const Span& other) : maxSize(other.maxSize){
	for (size_t i = 0; i < other.numbers.size(); i++)
		numbers.push_back(other.numbers[i]);
}

Span::~Span(){}

Span&	Span::operator=(const Span& other){
	if (this != &other){
		maxSize = other.maxSize;
		numbers = other.numbers;
	}
	return (*this);
}

void Span::addNumber(int number) {
	if (numbers.size() < maxSize) {
		numbers.push_back(number);
	} else {
		throw std::runtime_error("Maximum capacity reached");
	}
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last) {
   for(std::vector<int>::iterator it = first; it != last; it++){
		addNumber(*it);
   }
}

int Span::shortestSpan() {
	if (numbers.size() < 2) {
		throw std::runtime_error("Not enough numbers to find span");
	}
	std::sort(numbers.begin(), numbers.end());
	int minSpan = numbers[1] - numbers[0];
	for (size_t i = 0; i < numbers.size() - 1; ++i) {
		int span = numbers[i + 1] - numbers[i];
		if (span < minSpan) {
			minSpan = span;
		}
	}
	return minSpan;
}

int Span::longestSpan() {
	if (numbers.size() < 2) {
		throw std::runtime_error("Not enough numbers to find span");
	}
	std::sort(numbers.begin(), numbers.end());
	return numbers.back() - numbers.front();
}

std::vector<int>	Span::getVector(){
	return numbers;
}