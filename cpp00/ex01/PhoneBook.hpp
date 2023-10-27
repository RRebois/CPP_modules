/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:08:33 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/27 15:02:59 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
			Contact	contact[8];
			int		counter;

			PhoneBook(int i);
			~PhoneBook(void);

			void	create_contact(void);
			void	display(void);
};

#endif
