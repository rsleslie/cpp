/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:34:16 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 14:10:30 by rleslie-         ###   ########.fr       */
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



// #ifndef MUTANTSTACK_HPP
// #define MUTANTSTACK_HPP

// #include <stack>
// #include <iterator>

// template <typename T>
// class MutantStack : public std::stack<T> {
// public:
//     using std::stack<T>::c;

//     typedef typename T::container_type::iterator iterator;
//     typedef typename T::container_type::const_iterator const_iterator;

//     iterator begin() {
//         return c.begin();
//     }

//     iterator end() {
//         return c.end();
//     }

//     const_iterator cbegin() const {
//         return c.cbegin();
//     }

//     const_iterator cend() const {
//         return c.cend();
//     }
// };

// #endif



// #ifndef MUTANTSTACK_HPP
// #define MUTANTSTACK_HPP

// #include <stack>
// #include <iterator>

// template <typename T>
// class MutantStack : public std::stack<T> {
// 	public:
// 		using std::stack<T>::c;
// 		typedef typename T::container_type::iterator iterator;
// 		typedef typename T::container_type::const_iterator const_iterator;

// 		iterator begin() {
// 			return c.begin();
// 		}

// 		iterator end() {
// 			return c.end();
// 		}

// 		const_iterator begin() const {
// 			return c.begin();
// 		}

// 		const_iterator end() const {
// 			return c.end();
// 		}
// };

// #endif
