/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:30:29 by rleslie-          #+#    #+#             */
/*   Updated: 2023/10/03 12:20:12 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
    std::string		last_name;
	std::string		first_name;
	std::string		nickname;
	long long int	phone_number;
	std::string		dark_secrect;
public:
    Contact();
	void    		setFirtName();
	void			setLastName();
	void			setNickname();
	void			setDarkestsecrect();
	bool			setPhoneNumber();
	long long int	getNumber();
	std::string		getDarkest();
	std::string		getNickname();
	std::string		getLastName();
	std::string		getFistName();
    ~Contact();
};

#endif