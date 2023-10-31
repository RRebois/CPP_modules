/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:09:01 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/31 15:55:40 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(int a) : counter(a)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::create_contact(void)
{
	if (this->counter > 7)
		this->counter = 0;
	this->contact[this->counter].new_contact();
	this->contact[this->counter].index = this->counter + 1;
std::cout << "index contact saved" << this->contact[this->counter].index << std::endl;
	this->counter++;
}

void	PhoneBook::display(void)
{
	int	j;
	int	i;

	std::cout << std::setw(10) << std::right << "index" << "|" \
		<< std::setw(10) << std::right << "First name" << "|" \
		<< std::setw(10) << std::right << "Last name" << "|" \
		<< std::setw(10) << std::right << "Nickname" << "|" << std::endl;
	for (j = 0; j < 8; j++)
	{
		if (this->contact[j].index != -1)
		{
			i = -1;
			std::cout << std::setw(10) << std::right << this->contact[j].index << "|";
			while (++i < 3)
				std::cout << std::setw(10) << std::right << this->contact[j].getValues(i, 0) << "|";
			std::cout << std::endl;
		}
	}
}
