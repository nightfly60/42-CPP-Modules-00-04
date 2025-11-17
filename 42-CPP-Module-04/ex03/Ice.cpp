/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:21:06 by edurance          #+#    #+#             */
/*   Updated: 2025/11/15 11:26:52 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	// std::cout << "[Ice] Default constructor called" << std::endl;

	return ;
}

Ice::Ice(const Ice& other) : AMateria("ice")
{
	(void)other;
	// std::cout << "[Ice] Copy constructor called" << std::endl;

	return ;
}

Ice::~Ice(void)
{
	// std::cout << "[Ice] Default destructor called" << std::endl;

	return ;
}

Ice&	Ice::operator=(const Ice& other)
{
	(void)other;
	// std::cout << "[Ice] Copy assignment operator called" << std::endl;

	return (*this);
}

AMateria*	Ice::clone(void) const
{
	AMateria *temp = new Ice();

	return (temp);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

	return ;
}
