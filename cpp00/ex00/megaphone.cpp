/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrebois <rrebois@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:59:35 by rrebois           #+#    #+#             */
/*   Updated: 2023/10/26 14:59:36 by rrebois          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

int	main(int ac, char **av)
{
	int		i;
	size_t	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
				std::cout << static_cast<char>(toupper(av[i][j]));
		}
		std::cout << std::endl;
	}
	return (0);
}
