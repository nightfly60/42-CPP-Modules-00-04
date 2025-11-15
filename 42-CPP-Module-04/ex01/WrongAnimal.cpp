/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:12:14 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 12:02:15 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "";
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;

	return ;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->_type = type;
	std::cout << "[WrongAnimal] Constructor called with type: " << type << std::endl;

	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal& other)
{
	this->_type = other._type;
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;

	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[WrongAnimal] Default destructor called with type: " << this->_type << std::endl;

	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;

	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "*** WrongAnimal sound ***" << std::endl;

	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
