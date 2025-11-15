/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:12:14 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 12:23:28 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "";
	std::cout << "[Animal] Default constructor called" << std::endl;

	return ;
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << "[Animal] Constructor called with type: " << type << std::endl;

	return ;
}

Animal::Animal(Animal& other)
{
	this->_type = other._type;
	std::cout << "[Animal] Copy constructor called" << std::endl;

	return ;
}

Animal::~Animal(void)
{
	std::cout << "[Animal] Default destructor called with type: " << this->_type << std::endl;

	return ;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	std::cout << "[Animal] Copy assignment operator called" << std::endl;

	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "* Random Animal sound *" << std::endl;

	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
