/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:08:16 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 23:17:55 by rleslie-         ###   ########.fr       */
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
	int	index;
	std::string	array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (array[i] == level)
			index = i;
	}	
	return (index);
}

void	Harl::complain(std::string level)
{
	void (Harl::*pointerFunction[4])(void);
	pointerFunction[0] = &Harl::debug;
	pointerFunction[1] = &Harl::info;
	pointerFunction[2] = &Harl::warning;
	pointerFunction[3] = &Harl::error;
	if (harlFilter(level) == -1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	(this->*pointerFunction[harlFilter(level)])();
}