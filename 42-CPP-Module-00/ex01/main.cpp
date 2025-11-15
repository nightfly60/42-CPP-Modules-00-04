/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:55:18 by edurance          #+#    #+#             */
/*   Updated: 2025/11/07 12:49:08 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	PhoneBookTruncate(std::string data)
{
	std::string	FormatedString;

	if (data.length() > 10)
		FormatedString = data.substr(0, 9) + ".";
	else
		FormatedString = std::string(10 - data.length(), ' ') + data;
	return (FormatedString);
}

static void	start_phonebook(PhoneBook book, std::string	input)
{
	int i = 0;
	int count = 0;

	while (true)
	{
		std::cout << "PhoneBook -> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (!input.compare("ADD"))
		{
			if (book.AddContact(i))
				return ;
			i = (i + 1) % 8;
			if (count < 8)
				++count;
			continue;
		}
		if (!input.compare("SEARCH"))
			book.DisplayInformations(count);
		if (!input.compare("EXIT"))
			break ;
	}
}

int	main(void)
{
	PhoneBook book;
	std::string	input;

	start_phonebook(book, input);
	return (0);
}
