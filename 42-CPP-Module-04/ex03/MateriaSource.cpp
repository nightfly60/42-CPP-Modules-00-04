/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:00:19 by edurance          #+#    #+#             */
/*   Updated: 2025/11/15 12:21:42 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_storage[i] = NULL;
	// std::cout << "[MateriaSource] Default constructor called" << std::endl;

	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._storage[i])
			this->_storage[i] = other._storage[i]->clone();
		else
			this->_storage[i] = NULL;
	}

	// std::cout << "[MateriaSource] Copy constructor called" << std::endl;

	return ;
}

MateriaSource::~MateriaSource(void)
{

	for (int i = 0; i < 4; i++)
		delete this->_storage[i];

	// std::cout << "[MateriaSource] Default destructor called" << std::endl;

	return ;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this == &other)
		return (*this);

	for (int i = 0; i < 4; i++)
	{
		delete this->_storage[i];
		if (other._storage[i])
			this->_storage[i] = other._storage[i]->clone();
	}

	// std::cout << "[MateriaSource] Copy assignment operator called" << std::endl;

	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;

	for (int i = 0; i < 4; i++)
	{
		if (!(this->_storage[i]))
		{
			this->_storage[i] = m;
			return ;
		}
	}
	delete m;

	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_storage[i] && this->_storage[i]->getType() == type)
			return (this->_storage[i]->clone());
	}
	return (NULL);
}
