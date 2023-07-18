/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:03:53 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/16 17:56:23 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string	target_copy(argv[i]);
		for (unsigned long j = 0; j < target_copy.length(); j++)
			target_copy[j] = std::toupper(target_copy[j]);
		if (i != argc - 1)
			std::cout << target_copy << " ";
		else
			std::cout << target_copy;
	}
	return (0);
}
