/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:04:03 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/02 22:18:38 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Phonebook.hpp"

int	main()
{
	std::string input;
	Phonebook	phonebook = Phonebook();

	while (1)
	{
		std::cout << "Choose one of the options below.\nADD, SEARCH and EXIT." << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.add();	
		else if (input == "EXIT")
			break ;
		else if (input ==  "SEARCH")
			phonebook.search();	
		else
			std::cout << input << ": invalid command" << std::endl;	
	}
	return (0);	
}