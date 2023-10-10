/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:25:51 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/02 18:02:56 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string	type_string(argv[i]);
			for (unsigned long j = 0; j < type_string.length(); j++)
				type_string[j] = std::toupper(type_string[j]);
			if (i != argc - 1)
				std::cout << type_string << " ";
			else
				std::cout << type_string << std::endl;
		}
	}
	return (0);
}