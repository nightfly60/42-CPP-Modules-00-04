/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:31:57 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 12:24:55 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "[Cat] Default constructor called" << std::endl;

	return ;
}

Cat::Cat(Cat& other) : Animal(other._type)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "[Cat] Copy constructor called" << std::endl;

	return ;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "[Cat] Default destructor called" << std::endl;

	return ;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	delete this->_brain;
	this->_type = other._type;
	this->_brain = new Brain(*other._brain);
	std::cout << "[Cat] Copy assignment operator called" << std::endl;

	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "🐱 * Meow Meow *" << std::endl;

	return ;
}
