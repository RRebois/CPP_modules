/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:05:35 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/31 16:18:42 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	this->index = -1;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::new_contact()
{
	this->_firstName.clear();
	while (this->_firstName.empty())
	{
		std::cout << "New contact first name: ";
		std::getline(std::cin, this->_firstName);
	}
	this->_lastName.clear();
	while (this->_lastName.empty())
	{
		std::cout << "New contact last name: ";
		std::getline(std::cin, this->_lastName);
	}
	this->_nickname.clear();
	while (this->_nickname.empty())
	{
		std::cout << "New contact nickname: ";
		std::getline(std::cin, this->_nickname);
	}
	this->_number.clear();
	while (this->_number.empty())
	{
		std::cout << "New contact phonenumber: ";
		std::getline(std::cin, this->_number);
	}
	this->_secret.clear();
	while (this->_secret.empty())
	{
		std::cout << "New contact darkest secret: ";
		std::getline(std::cin, this->_secret);
	}
	std::cout << "new contact entered successfully!!" << std::endl << std::endl;
	return ;
}

std::string	Contact::getValues(int i, int j) const
{
	std::string	buf;

	if (i == 0)
		buf = this->_firstName;
	else if (i == 1)
		buf = this->_lastName;
	else if (i == 2)
		buf = this->_nickname;
	else if (i == 3)
		buf = this->_number;
	else
		buf = this->_secret;
	if (buf.length() > 10 && j == 0)
		buf = buf.substr(0, 9) + ".";
	return (buf);
}
