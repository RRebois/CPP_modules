/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:09:01 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/27 14:59:31 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(int a) : counter(a)
{
	// std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::create_contact(void)
{
	this->counter++;
	this->contact[this->counter].new_contact();
	this->contact->index = this->counter;
}

void	PhoneBook::display(void)
{
	int	j;

	std::cout << std::setw(10) << std::right << "index" << "|" \
			<< std::setw(10) << std::right << "First name" << "|" \
			<< std::setw(10) << std::right << "Last name" << "|" \
			<< std::setw(10) << std::right << "Nickname" << std::endl;
	for (j = 0; j < 8; j++)
	{
		if (this->contact[j].getValues(0).length() > 0)
		{
			std::cout << std::setw(10) << std::right << j << "|"
					<< std::setw(10) << std::right << this->contact[j].getValues(0) << "|" \
					<< std::setw(10) << std::right << this->contact[j].getValues(1) << "|" \
					<< std::setw(10) << std::right << this->contact[j].getValues(2) << std::endl;

		}
	}
}
