/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:43:58 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 12:01:01 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "[Brain] Default constructor called" << std::endl;

	return ;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "[Brain] Copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "[Brain] Copy constructor called" << std::endl;

	return ;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	std::cout << "[Animal] Copy assignment operator called" << std::endl;

	return (*this);
}
