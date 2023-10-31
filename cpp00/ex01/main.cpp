/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:19:15 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/31 16:20:17 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>

static void	display_rules(void)
{
	std::cout << "Enter one of the following commands: " << std::endl << \
		"- ADD to add a new contact" << std::endl << \
		"- SEARCH to look at the phonebook contacts" << std::endl <<\
		"- EXIT to exit the program" << std::endl << std::endl;
}

static void	display_contact_infos(int j, PhoneBook book)
{
	j -= 1;
	std::cout << "First Name: " << book.contact[j].getValues(0, 1) << std::endl;
	std::cout << "Last Name: " << book.contact[j].getValues(1, 1) << std::endl;
	std::cout << "NickName: " << book.contact[j].getValues(2, 1) << std::endl;
	std::cout << "Phone number: " << book.contact[j].getValues(3, 1) << std::endl;
	std::cout << "Darkest secret: " << book.contact[j].getValues(4, 1) << std::endl;
	std::cout << std::endl;
}

static void	check_contact(PhoneBook book)
{
	int			i;
	int			j;
	int			value;
	std::string	buf;

	i = 0;
	while (book.contact[i].index != -1)
		i++;
	while (1)
	{
		std::cout << "select contact index to view detailled info: ";
		std::getline(std::cin, buf);
		std::istringstream	check(buf);
		check >> value;
		j = -1;
		while (++j < i)
		{
			if (book.contact[j].index == value)
			{
				std::cout << "contact " << value << " selected" << std::endl;
				display_contact_infos(value, book);
				return ;
			}
			else if (j == i - 1)
				std::cout << "Invalid index. Choose a valid index \
between 1 and " << i << std::endl;
		}
	}
}

int	main(void)
{
	PhoneBook	book(0);
	std::string	buf;
	std::string	ADD("ADD");
	std::string	SEARCH("SEARCH");
	std::string	EXIT("EXIT");

	display_rules();
	while (1)
	{
		std::getline(std::cin, buf);
		if (!buf.compare(EXIT))
			break ;
		else if (!buf.compare(ADD))
			book.create_contact();
		else if (!buf.compare(SEARCH))
		{
			book.display();
			if (book.contact[0].index != -1)
				check_contact(book);
			else
				std::cout << "0 contacts added, add a contact first to view its infos" << \
					std::endl;
		}
		else
			display_rules();
	}
	return (0);
}
