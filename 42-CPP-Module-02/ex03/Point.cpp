/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:13:09 by edurance          #+#    #+#             */
/*   Updated: 2025/11/11 16:41:09 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
	// std::cout << "Point Default constructor called" << std::endl;
	return ;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	// std::cout << "Point constructor called" << std::endl;
	return ;
}

Point::Point(const Point& other) : _x(Fixed(other._x)), _y(Fixed(other._y))
{
	// std::cout << "Point Copy constructor called" << std::endl;
	return ;
}

Point::~Point(void)
{
	// std::cout << "Point Default destructor called" << std::endl;
	return ;
}

Point&	Point::operator=(const Point& other)
{
	(void)other;
	return (*this);
}

Fixed	Point::getPointX(void) const
{
	return (this->_x);
}

Fixed	Point::getPointY(void) const
{
	return (this->_y);
}
