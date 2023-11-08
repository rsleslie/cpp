/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:12:38 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 16:22:37 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template <typename T>
typename T::iterator    easyfind(T& container, int value) {
    
    for (typename T::iterator it = container.begin(); it != container.end(); ++it) {
        if (*it == value) {
            return it;
        }
    }
    throw std::runtime_error("Value not found in container");
}
