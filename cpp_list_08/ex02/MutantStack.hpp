/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:34:16 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 16:22:19 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(void){}
		MutantStack(const MutantStack& other) {*this=other;}
		~MutantStack(){}

		MutantStack& operator=(const MutantStack& other){
			if (this != &other){
				this->c = other.c;
			}
			return *this;
		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
};

#endif
