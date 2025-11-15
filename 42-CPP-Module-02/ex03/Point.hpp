/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:56:30 by edurance          #+#    #+#             */
/*   Updated: 2025/11/11 16:52:47 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point& other);
		~Point(void);

		Point&	operator=(const Point& other);

		Fixed	getPointX(void) const;
		Fixed	getPointY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
Fixed	GetTriangleArea(Point const a, Point const b, Point const c);

#endif
