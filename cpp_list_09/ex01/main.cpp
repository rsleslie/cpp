/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:21:30 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/10 16:47:12 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
# include <iostream>

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cout << "Error" << std::endl;
        return (1);
    }
    
    RPN init;
    init.calculator(argv[1]);
    return (0);
}