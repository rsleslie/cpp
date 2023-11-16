/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:51:03 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/16 12:29:23 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

template<template<typename, typename> class T>
class PmergeMe {
	private:
		typedef std::pair<int, int> myPair;
		T<myPair, std::allocator<myPair> > myList;
		int rest;

	public:
		PmergeMe(T<int, std::allocator<int> >& coonteiner);
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();

		void 	Pmerge(T<int, std::allocator<int> >& _list);
		void 	merge(T<int, std::allocator<int> >& _list);
		void 	sortList(void);	
		void 	insertionSort(T<int, std::allocator<int> >& _list, int value);
		void	initNumbersJacobsthal(T<int, std::allocator<int> >& _list);
		void	jacobsthal(T<int, std::allocator<int> >& _list2);
};

template<template<typename, typename> class T>
PmergeMe<T>::PmergeMe(T<int, std::allocator<int> >& Conteiner){
	rest = 0;
	Pmerge(Conteiner);
}

template<template<typename, typename> class T>
PmergeMe<T>::PmergeMe(const PmergeMe& other) {
	myList = other.myList;
	rest = other.rest;
}

template<template<typename, typename> class T>
PmergeMe<T>& PmergeMe<T>::operator=(const PmergeMe& other) {
	if (this != &other) {
		this->myList = other.myList;
		this->rest = other.rest;
	}
	return *this;
}

template<template<typename, typename> class T>
PmergeMe<T>::~PmergeMe() {}

template<template<typename, typename> class T>
void PmergeMe<T>::merge(T<int, std::allocator<int> >& _list) {
   	if ((_list.size() % 2 != 0) && rest == 0){
		rest = _list.back();
		_list.pop_back();
	}
	
	for (typename T<int, std::allocator<int> >::iterator it = _list.begin(); it != _list.end(); ++it){
		int number = *it;
		++it;
		myList.push_back(myPair(number, *it));
	}
}

template<template<typename, typename> class T>
void PmergeMe<T>::Pmerge(T<int, std::allocator<int> >& _list) {
	merge(_list);
	sortList();
	jacobsthal(_list);
}

template<template<typename, typename> class T>
void PmergeMe<T>::sortList(void) 
{
	T<myPair, std::allocator<myPair> > tempContainer(myList);  
	for (typename T<myPair, std::allocator<myPair> >::iterator it = tempContainer.begin(); it != tempContainer.end(); ++it) {
		std::pair<int, int> temp = *it;
		if (temp.first < temp.second) {
			std::swap(temp.first, temp.second);
			*it = temp;
		}
	}
	std::copy(tempContainer.begin(), tempContainer.end(), myList.begin());
	std::sort(myList.begin(), myList.end());
}

template<template<typename, typename> class T>
void	PmergeMe<T>::initNumbersJacobsthal(T<int, std::allocator<int> >& _list){
	_list.push_back(0);
	_list.push_back(1);
	_list.push_back(3);
	_list.push_back(5);
	_list.push_back(11);
	_list.push_back(21);
	_list.push_back(43);
	_list.push_back(85);
	_list.push_back(171);
	_list.push_back(341);
	_list.push_back(683);
	_list.push_back(1365);
	_list.push_back(2731);
	_list.push_back(5461);
	_list.push_back(10923);
}

template<template<typename, typename> class T>
void	PmergeMe<T>::jacobsthal(T<int, std::allocator<int> >& _list2) {
	T<int, std::allocator<int> > numbersJacobsthal;
  
	_list2.clear();
	for(typename T<myPair, std::allocator<myPair> >::iterator it = myList.begin(); it != myList.end(); ++it) {
		_list2.push_back((*it).first);
	}

	initNumbersJacobsthal(numbersJacobsthal);
	for(size_t i = 0; i < numbersJacobsthal.size(); i++){
		
		if (i == 0){
			std::pair<int, int> temp;
			temp = myList[0];
			insertionSort(_list2, temp.second);
		}else{
			for(size_t index = static_cast<size_t>(numbersJacobsthal[i]); index != static_cast<size_t>(numbersJacobsthal[i - 1]); index--){
				if(0 < myList.size()){
					std::pair<int, int> temp;
					if (index < myList.size()){
						temp = myList[index];
						insertionSort(_list2, temp.second);
					}
				}
			}
		}
	}
	if(rest != 0){
		insertionSort(_list2, rest);
	}
}

template<template<typename, typename> class T>
void PmergeMe<T>::insertionSort(T<int, std::allocator<int> >& _list, int value) 
{
	typename T<int, std::allocator<int> >::iterator it = _list.begin();
	while (it != _list.end() && *it < value) {
		++it;
	}
	_list.insert(it, value);
}

#endif 
