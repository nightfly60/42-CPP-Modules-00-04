/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:10:58 by edurance          #+#    #+#             */
/*   Updated: 2025/11/07 15:56:45 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "PhoneBook: Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook: Destructor called" << std::endl;
	return ;
}

void	PhoneBook::DisplayInformationsID(int id)
{
	std::cout << std::endl;
	std::cout << "ID: " << id + 1 << std::endl;
	std::cout << "First Name: " << this->_contacts[id].GetFirstName() << std::endl;
	std::cout << "Last Name: " << this->_contacts[id].GetLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[id].GetNickname() << std::endl;
	std::cout << "Phone Number: " << this->_contacts[id].GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->_contacts[id].GetDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::DisplayInformations(int count)
{
	std::string	input;
	int			asked_i;

	for (int j = 0; j < count; ++j)
	{
		std::string FirstName = PhoneBookTruncate(this->_contacts[j].GetFirstName());
		std::string LastName = PhoneBookTruncate(this->_contacts[j].GetLastName());
		std::string Nickname = PhoneBookTruncate(this->_contacts[j].GetNickname());

		std::cout << "        " << j + 1 << "|";
 		std::cout << FirstName << "|";
		std::cout << LastName << "|";
		std::cout << Nickname << "|";
		std::cout << std::endl;
	}
	while (true)
	{
		std::cout << "Research Index: ";
		std::getline(std::cin, input);
		if (input.empty() || std::cin.eof())
			return ;
		asked_i = std::atoi(input.c_str());
		if (input.length() < 3 && asked_i <= 8 && asked_i > 0 && count > asked_i - 1)
			DisplayInformationsID(asked_i - 1);
		else
			std::cout << "Incorrect ID\n";
		return ;
	}
}

int	PhoneBook::AddFirstName(Contact *contact)
{
	std::string input;

	while (true)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, input);

		if (std::cin.eof())
			return (-1);
		if (input.empty())
			std::cout << "You can't have an empty First Name !" << std::endl;
		else
		{
			(*contact).SetFirstName(input);
			return (0);
		}
	}
}

int	PhoneBook::AddLastName(Contact *contact)
{
	std::string input;

	while (true)
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, input);

		if (std::cin.eof())
			return (-1);
		if (input.empty())
			std::cout << "You can't have an empty Last Name !" << std::endl;
		else
		{
			(*contact).SetLastName(input);
			return (0);
		}
	}
}

int	PhoneBook::AddNickname(Contact *contact)
{
	std::string input;

	while (true)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, input);

		if (std::cin.eof())
			return (-1);
		if (input.empty())
			std::cout << "You can't have an empty Nickname !" << std::endl;
		else
		{
			(*contact).SetNickname(input);
			return (0);
		}
	}
}

int	PhoneBook::AddPhoneNumber(Contact *contact)
{
	std::string input;

	while (true)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, input);

		if (std::cin.eof())
			return (-1);
		if (input.empty())
			std::cout << "You can't have an empty Phone Number !" << std::endl;
		else
		{
			(*contact).SetPhoneNumber(input);
			return (0);
		}
	}
}

int	PhoneBook::AddDarkestSecret(Contact *contact)
{
	std::string input;

	while (true)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);

		if (std::cin.eof())
			return (-1);
		if (input.empty())
			std::cout << "You can't have an empty Darkest secret !" << std::endl;
		else
		{
			(*contact).SetDarkestSecret(input);
			return (0);
		}
	}
}

int	PhoneBook::AddContact(int id)
{
	if (AddFirstName(&this->_contacts[id]) == -1)
		return (1);
	if (AddLastName(&this->_contacts[id]) == -1)
		return (1);
	if (AddNickname(&this->_contacts[id]) == -1)
		return (1);
	if (AddPhoneNumber(&this->_contacts[id]) == -1)
		return (1);
	if (AddDarkestSecret(&this->_contacts[id]) == -1)
		return (1);
	return (0);
}
