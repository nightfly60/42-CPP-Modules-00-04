/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:32:07 by edurance          #+#    #+#             */
/*   Updated: 2025/11/07 12:48:43 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Contact: Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Contact: Destructor called" << std::endl;
	return ;
}

/*-----------------------------SETTER---------------------------------*/

void Contact::SetFirstName(std::string first_name)
{
	_first_name = first_name;
}

void Contact::SetLastName(std::string last_name)
{
	_last_name = last_name;
}

void Contact::SetNickname(std::string nickname)
{
	_nickname = nickname;
}

void Contact::SetPhoneNumber(std::string number)
{
	_phone_number = number;
}

void Contact::SetDarkestSecret(std::string secret)
{
	_darkest_secret = secret;
}

/*-----------------------------GETTER---------------------------------*/

std::string Contact::GetFirstName(void)
{
	return (this->_first_name);
}

std::string Contact::GetLastName(void)
{
	return (this->_last_name);
}

std::string Contact::GetNickname(void)
{
	return (this->_nickname);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->_phone_number);
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->_darkest_secret);
}
