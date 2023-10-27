/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:05:35 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/27 15:38:19 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void	Contact::new_contact(void)
{
	std::string	buf;

	// std::cout << buf.length() << buf << std::endl;
	// while (buf.length() == 0)
	// {
	std::cout << "New contact first name: ";
	std::cin >> buf;
	// std::cout << this->_firstName.length() << this->_firstName << std::endl;
	// }
	this->_firstName = buf;
	// std::cout << this->_firstName.length() << this->_firstName << std::endl;
	std::cout << "New contact last name: ";
	std::cin >> this->_lastName;
	std::cout << "New contact nickname: ";
	std::cin >> this->_nickname;
	std::cout << "New contact phonenumber: ";
	std::cin >> this->_number;
	std::cout << "New contact darkest secret: ";
	std::cin >> this->_secret;
	std::cout << "new contact entered successfully!!" << std::endl << std::endl;
	return ;
}

std::string	Contact::getValues(int i) const
{
	if (i == 0)
		return (this->_firstName);
	else if (i == 1)
		return (this->_lastName);
	else
		return (this->_nickname);
}
