/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:34:41 by edurance          #+#    #+#             */
/*   Updated: 2025/11/11 12:50:37 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;


/*--------------------- CONSTRUCTORS / DESCTRUCTORS ---------------------*/
Fixed::Fixed(void)
{
	_rawValue = 0;

	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	_rawValue = other.getRawBits();

	return ;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	_rawValue = value << _fractionalBits;

	return ;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	_rawValue = roundf(value * pow(2, _fractionalBits));

	return ;
}


/*--------------------- OPERATORS ---------------------*/
Fixed&	Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	_rawValue = other.getRawBits();

	return (*this);
}

std::ostream&	operator<<(std::ostream& out, const Fixed& other)
{
	out << other.toFloat();

	return (out);
}

bool	Fixed::operator>(const Fixed& other) const
{
	if (_rawValue > other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& other) const
{
	if (_rawValue < other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other) const
{
	if (_rawValue >= other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other) const
{
	if (_rawValue <= other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& other) const
{
	if (_rawValue == other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other) const
{
	if (_rawValue != other.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	Fixed res;
	res.setRawBits(_rawValue + other.getRawBits());

	return (res);
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	Fixed res;
	res.setRawBits(_rawValue - other.getRawBits());

	return (res);
}

/*doit etre remis a l'echelle*/
Fixed	Fixed::operator*(const Fixed& other) const
{
	Fixed res;
	res.setRawBits((_rawValue * other.getRawBits()) / (1 << _fractionalBits));

	return (res);
}

/*doit etre remis a l'echelle*/
Fixed	Fixed::operator/(const Fixed& other) const
{
	Fixed res;
	res.setRawBits((_rawValue << _fractionalBits) / other.getRawBits());

	return (res);
}

Fixed&	Fixed::operator++(void)
{
	++_rawValue;

	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++_rawValue;

	return (temp);
}

Fixed&	Fixed::operator--(void)
{
	--_rawValue;

	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--_rawValue;

	return (temp);
}


/*--------------------- GETTER / SETTER ---------------------*/
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_rawValue);
}

void	Fixed::setRawBits(int const raw)
{
	_rawValue = raw;
	return ;
}


/*--------------------- CONVERTS ---------------------*/
float	Fixed::toFloat(void) const
{
	float	value;

	value = _rawValue / pow(2, _fractionalBits);
	return (value);
}

int	Fixed::toInt(void) const
{
	int	value;

	value = _rawValue >> _fractionalBits;;
	return (value);
}


/*--------------------- COMPARISONS ---------------------*/
Fixed&	Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return (first);
	return (second);
}

const Fixed&	Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed&	Fixed::max(Fixed& first, Fixed& second)
{
	if (first > second)
		return (first);
	return (second);
}

const Fixed&	Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first > second)
		return (first);
	return (second);
}
