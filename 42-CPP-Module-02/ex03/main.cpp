/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:34:20 by edurance          #+#    #+#             */
/*   Updated: 2025/11/11 17:14:02 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main(void)
{
	Point	a(4.59f, 2.82f);
	Point	b(8.79f, 7.46f);
	Point	c(4.44f, 0.47f);
	Point	point(4.44f, 0.47f);

	if (bsp(a, b, c, point))
		std::cout << "The point is in the triangle !" << std::endl;
	else
		std::cout << "The point is not in the triangle ! :(" << std::endl;


	return (0);
}
