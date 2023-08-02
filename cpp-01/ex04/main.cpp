/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:25:39 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/27 17:19:28 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./library.hpp"

int main(int argc, char **argv)
{
	
	if (!check_arguments(argc, argv))
		return (1);
	replaceLetter(argv);
	return (0);
}
