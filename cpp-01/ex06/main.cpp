/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:22:43 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 21:51:31 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int argc, char **argv)
{
	std::string	level;
	Harl harl;

	if (argc == 1)
	{
		std::cout << "no arguments" << std::endl;
		return (0);
	}
	if (argc > 2)
	{
		std::cout << "to many arguments" << std::endl;
		return (0);
	}
	level = argv[1];
	harl.complain(level);	
	return (0);
}