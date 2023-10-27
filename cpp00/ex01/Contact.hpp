/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:59:47 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/27 15:17:03 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact
{
	public:
			int			index;

			Contact(void);
			~Contact(void);

			void		new_contact(void);
			std::string	getValues(int i) const;
			// void	setvalues(std::string str);

	private:
			std::string	_firstName;
			std::string	_lastName;
			std::string	_nickname;
			std::string	_number;
			std::string	_secret;
};

#endif
