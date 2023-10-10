/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:08:16 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 21:50:39 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	harlFilter(std::string level)
{
	int	level_number;

	level_number = 0;
	if (level == "DEBUG")
		level_number = 1;
	else if (level == "INFO")
		level_number = 2;
	else if (level == "WARNING")
		level_number = 3;
	else if (level == "ERROR")
		level_number = 4;
	else
		level_number = 0;
	return (level_number);
}

void	Harl::complain(std::string level)
{
	switch (harlFilter(level))
	{
	case 1:
		debug();
		break;
	case 2:
		info();
		break;
	case 3:
		warning();
		break;
	case 4:
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}