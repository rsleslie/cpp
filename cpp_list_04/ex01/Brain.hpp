/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:24:02 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/12 13:27:07 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream> 

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);
};

#endif