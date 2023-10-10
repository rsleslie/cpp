/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:26:02 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 14:16:12 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
# include <sstream>

class Phonebook
{
private:
	Contact 	contact_list[8];
	int			n_contacts;
	int			status;	
public:
	Phonebook() : n_contacts(0), status(0){}
	void	add();
	void	search();
	void	setNumber();
	int		getNumber();
	~Phonebook();
};

#endif