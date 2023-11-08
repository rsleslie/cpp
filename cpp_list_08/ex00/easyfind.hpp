/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:12:38 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/08 12:50:57 by rleslie-         ###   ########.fr       */
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

/*é um objeto projetado para percorrer um conteiner e podemos iterar por meio de um ampla
variaedade de conteiners

O conteiner gerencia espacos de amarzenamento dos seus elementos e fornece funções membro
para acessa-los diretamente ou por meio de iteradores
um conteiner pe um objeto que armazena yna coleção de elementos (outros objetos) ele replica
algumas estruturas como list, stack, vector
conteine de sequencia
conteiner associativo (mao)
*/  