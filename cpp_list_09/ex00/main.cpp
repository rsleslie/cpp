/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:40:27 by rleslie-          #+#    #+#             */
/*   Updated: 2023/11/16 11:52:06 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    if (argc < 2){
        return (std::cout << "Error: could not open file." << std::endl, 0);
    }
    
    try{
       BitcoinExchange bitcoin;
       bitcoin.calculate(argv[1]);
    }catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}
