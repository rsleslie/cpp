/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkArguments.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:11:36 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 21:07:15 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Library.hpp"

int	check_file(char **argv)
{
	std::ifstream inputFile(argv[1]);
	if (!inputFile){
		std::cerr << "error opening file" << std::endl;
		return (0);
	}
	inputFile.seekg(0, std::ios::end);
	if (inputFile.tellg() == 0){
		std::cerr << "Empty file" << std::endl;
		return (0);
	}
	inputFile.seekg(0, std::ios::beg);
	inputFile.close();
	return (1);
}

int	check_arguments(int argc, char **argv)
{
	if (argc < 4 || argc == 1){
		std::cerr << "few arguments." << std::endl;
		return (0);
	}
	if (argc > 4){
		std::cerr << "to many arguments." << std::endl;
		return (0);
	}
	if (!check_file(argv))
		return (0);
	return (1);
}
