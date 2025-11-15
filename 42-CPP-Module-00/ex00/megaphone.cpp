/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:23:06 by edurance          #+#    #+#             */
/*   Updated: 2025/11/05 17:11:22 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	str_toupper(std::string s)
{
	for (int i = 0; s[i] != 0; i++)
		s[i] = std::toupper(s[i]);

	return (s);
}

int	main(int ac, char **av)
{
	std::string str;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; av[i]; i++)
	{
		str = str_toupper(av[i]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
