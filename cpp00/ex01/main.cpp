/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:19:15 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/27 16:28:37 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

static void	display_rules(void)
{
	std::cout << "Enter one of the following commands: " << std::endl << \
		"- ADD to add a new contact" << std::endl << \
		"- SEARCH to look at the phonebook contacts" << std::endl <<\
		"- EXIT to exit the program" << std::endl << std::endl;
}

int	main(void)
{
	PhoneBook	book(0);
	std::string	buf;
	std::string	ADD ("ADD");
	std::string	SEARCH ("SEARCH");
	std::string	EXIT ("EXIT");

	display_rules();
	while (1)
	{
		std::cin >> buf;
		if (!buf.compare(EXIT))
			break ;
		else if (!buf.compare(ADD))
			book.create_contact();
		else if (!buf.compare(SEARCH))
		{
			book.display();
			std::cout << "select contact index to view detailled info";
			std::cin >> buf;
			if (atoi(buf.c_str()) == book.contact[0].index)
			{
				std::cout << "ok" << std::endl;
			}
		}
	}

	return (0);
}
