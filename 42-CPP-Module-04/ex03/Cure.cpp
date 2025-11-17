/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:21:06 by edurance          #+#    #+#             */
/*   Updated: 2025/11/15 11:26:36 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	// std::cout << "[Cure] Default constructor called" << std::endl;

	return ;
}

Cure::Cure(const Cure& other) : AMateria("cure")
{
	(void)other;
	// std::cout << "[Cure] Copy constructor called" << std::endl;

	return ;
}

Cure::~Cure(void)
{
	// std::cout << "[Cure] Default destructor called" << std::endl;

	return ;
}

Cure&	Cure::operator=(const Cure& other)
{
	(void)other;
	// std::cout << "[Cure] Copy assignment operator called" << std::endl;

	return (*this);
}

AMateria*	Cure::clone(void) const
{
	AMateria *temp = new Cure();

	return (temp);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

	return ;
}
