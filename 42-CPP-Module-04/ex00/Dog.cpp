/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:37:43 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 12:01:46 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "[Dog] Default constructor called" << std::endl;

	return ;
}

Dog::Dog(Dog& other) : Animal(other._type)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;

	return ;
}

Dog::~Dog(void)
{
	std::cout << "[Dog] Default destructor called" << std::endl;

	return ;
}

Dog&	Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	std::cout << "[Dog] Copy assignment operator called" << std::endl;

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "🐕 * Woof Woof *" << std::endl;

	return ;
}
