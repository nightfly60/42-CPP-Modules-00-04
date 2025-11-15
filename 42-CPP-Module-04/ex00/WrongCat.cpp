/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:31:57 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 10:59:09 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] Default constructor called" << std::endl;

	return ;
}

WrongCat::WrongCat(WrongCat& other) : WrongAnimal(other._type)
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;

	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[WrongCat] Default destructor called" << std::endl;

	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	std::cout << "[WrongCat] Copy assignment operator called" << std::endl;

	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "* Meow Meow: WrongCat sound *" << std::endl;

	return ;
}
