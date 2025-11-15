/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:34:41 by edurance          #+#    #+#             */
/*   Updated: 2025/11/11 11:43:54 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(void)
{
	_rawValue = 0;

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawValue = other.getRawBits();

	return ;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawValue = other.getRawBits();

	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawValue = raw;
	return ;
}
