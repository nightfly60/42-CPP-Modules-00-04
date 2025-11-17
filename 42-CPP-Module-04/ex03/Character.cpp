/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:15:58 by edurance          #+#    #+#             */
/*   Updated: 2025/11/15 13:09:21 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	this->_name = "";

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;

	for (int i = 0; i < 10; i++)
		this->_trash[i] = NULL;

	// std::cout << "[Character] Default constructor called" << std::endl;

	return ;
}

Character::Character(const std::string& name)
{
	this->_name = name;

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;

	for (int i = 0; i < 10; i++)
		this->_trash[i] = NULL;

	// std::cout << "[Character] Default constructor called with name: " << name << std::endl;

	return ;
}

Character::Character(const Character& other)
{
	this->_name = other._name;

	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}

	for (int i = 0; i < 10; i++)
	{
		if (other._trash[i])
			this->_trash[i] = other._trash[i]->clone();
		else
			this->_trash[i] = NULL;
	}

	// std::cout << "[Character] Copy constructor called" << std::endl;

	return ;
}

Character::~Character(void)
{

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}

	for (int i = 0; i < 10; i++)
	{
		if (this->_trash[i])
			delete this->_trash[i];
		this->_trash[i] = NULL;
	}

	// std::cout << "[Character] Default destructor called for " << this->_name << std::endl;

	return ;
}

Character&	Character::operator=(const Character& other)
{
	if (this == &other)
		return (*this);

	this->_name = other._name;

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
	}

	for (int i = 0; i < 10; i++)
	{
		if (this->_trash[i])
			delete this->_trash[i];
		if (other._trash[i])
			this->_trash[i] = other._trash[i]->clone();
	}

	// std::cout << "[Character] Copy assignment operator called" << std::endl;

	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;

	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == m)
			return ;
		if (!(this->_inventory[i]))
		{
			this->_inventory[i] = m;
			// std::cout << "Character " << this->_name << " equiped Materia " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
	}

	return ;
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;

	if (this->_inventory[idx])
	{
		for (int i = 0; i < 10; i++)
		{
			if (!(this->_trash[i]))
			{
				this->_trash[i] = this->_inventory[idx];
				// std::cout << "Character " << this->_name << " dropped Materia " << this->_inventory[idx]->getType() << std::endl;
				this->_inventory[idx] = NULL;
				return ;
			}
		}
	}
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;

	if (!this->_inventory[idx])
		return ;

	this->_inventory[idx]->use(target);
	return ;
}
