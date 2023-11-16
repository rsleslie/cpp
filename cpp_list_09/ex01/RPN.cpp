/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:04:25 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/16 12:28:56 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void){}

RPN::RPN(const RPN& other) : numbers(other.numbers){}

RPN&	RPN::operator=(const RPN& other){
	if (this != &other) {
			numbers = other.numbers;
		}
	return *this;
}

RPN::~RPN(){}

bool	is_digit(std::string& str){
	char c = str[0];

	if (c >= 48 && c <= 57)
		return (true);
	return (false);
}

bool	is_caracter(std::string& str){
	char c = str[0];
	
	if (c == 42 || c == 43 || c == 45 || c == 47){
		return (true);
	}
	return (false);
}

void	RPN::calculator(char *str){
	std::stack<int> numbers;
	std::stringstream ss(str);
	int					counter = 0;

	while (1){    
		std::string     is_num;
		if (ss >> is_num){
			if (is_digit(is_num)){
				std::stringstream convert_num(is_num);
				int num;
				convert_num >> num;
				numbers.push(num);
			}else {
				if (is_caracter(is_num)){
					int _newValue = 0;
					int _top;
					int _pop;
					
					_top = numbers.top();
					numbers.pop();
					_pop =  numbers.top();
					numbers.pop();
					if (is_num == "*")
						_newValue = _pop * _top;
					if (is_num == "-")
						_newValue = _pop - _top;
					if (is_num == "+")
						_newValue = _pop + _top;
					if (is_num == "/")
						_newValue = _pop / _top;
					numbers.push(_newValue);
					counter++;
				}else {
					std::cout << "Error" << std::endl;
					return ;
				}
			}
		}
		else{
			break ;
		}
	}
	if (counter != 0)
		std::cout << numbers.top() << std::endl;
	else{
		std::cout << "Error" << std::endl;
	}
}
