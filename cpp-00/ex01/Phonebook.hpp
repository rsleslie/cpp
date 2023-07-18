/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:32:48 by rleslie-          #+#    #+#             */
/*   Updated: 2023/07/18 18:16:48 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact contact_list[8];
	int		n_contacts;
	
public:
	Phonebook(/* args */) : n_contacts(0){};
	void	add(Contact& Contact);
	void	search(std::string& contact);
	// ~Phonebook();
};
