/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:11:06 by edurance          #+#    #+#             */
/*   Updated: 2025/11/11 17:14:29 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed	GetTriangleArea(Point const a, Point const b, Point const c)
{
	Fixed ax = a.getPointX();
	Fixed ay = a.getPointY();
	Fixed bx = b.getPointX();
	Fixed by = b.getPointY();
	Fixed cx = c.getPointX();
	Fixed cy = c.getPointY();

	Fixed	area = ((ax * by) - (ax * cy) + (bx * cy) - (bx * ay) + (cx * ay) - (cx * by));
	area = Fixed::max(area, area * -1) / 2;
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed totalArea = GetTriangleArea(a, b, c);
	Fixed abPointArea = GetTriangleArea(a, b, point);
	Fixed bcPointArea = GetTriangleArea(b, c, point);
	Fixed acPointArea = GetTriangleArea(a, c, point);

	//std::cout << "TOTAL AREA = " << totalArea.toFloat() << std::endl;
	//std::cout << "abPointArea = " << abPointArea.toFloat() << std::endl;
	//std::cout << "bcPointArea = " << bcPointArea.toFloat() << std::endl;
	//std::cout << "acPointArea = " << acPointArea.toFloat() << std::endl;
	//std::cout << "abPointArea + bcPointArea + acPointArea = " << (abPointArea + bcPointArea + acPointArea).toFloat() << std::endl;

	if (totalArea == abPointArea + bcPointArea + acPointArea)
		return (true);
	return (false);
}
