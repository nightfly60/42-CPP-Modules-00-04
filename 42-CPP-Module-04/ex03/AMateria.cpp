/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:00:30 by edurance          #+#    #+#             */
/*   Updated: 2025/11/15 11:25:58 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("")
{
	// std::cout << "[AMateria] Default constructor called" << std::endl;

	return ;
}

AMateria::AMateria(const std::string& type) : _type(type)
{
	// std::cout << "[AMateria] Constructor called with type: " << type << std::endl;

	return ;
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
	// std::cout << "[AMateria] Copy constructor called with type: " << other._type << std::endl;

	return ;
}

AMateria::~AMateria(void)
{
	// std::cout << "[AMateria] Default destructor called for type: " << this->_type << std::endl;

	return ;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	(void)other;
	// std::cout << "[AMateria] Copy assignment operator called" << std::endl;

	return (*this);
}

void		AMateria::use(ICharacter& target)
{
	(void)target;

	return ;
}

const std::string&	AMateria::getType() const
{
	return (this->_type);
}
