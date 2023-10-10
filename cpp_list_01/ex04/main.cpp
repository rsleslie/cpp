/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:25:39 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 21:07:10 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Library.hpp"

int main(int argc, char **argv)
{
	
	if (!check_arguments(argc, argv))
		return (1);
	replaceLetter(argv);
	return (0);
}
