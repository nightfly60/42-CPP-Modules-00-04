/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:18:00 by edurance          #+#    #+#             */
/*   Updated: 2025/11/13 15:01:47 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default contructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Constructor called for ClapTrap " << name << std::endl;

	return ;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "Copy constructor called" << std::endl;

	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: destructor called " << _name << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return (*this);

	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;

	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't have any energyPoints ! It can't attack or heal." << std::endl;
		return ;
	}
	--_energyPoints;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	std::cout << "ClapTrap " << _name << " lost 1 energy point (" << _energyPoints << " left)" << std::endl;

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " got hit. It lost " << amount << " hit points ! (" << _hitPoints << " left)" << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead !" << std::endl;
		return ;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	--_energyPoints;
	std::cout << "ClapTrap " << _name << " repaired itself, it regnained " << amount << " hit points ! (" << _hitPoints << " left)" << std::endl;
	std::cout << "ClapTrap " << _name << " lost 1 energy point (" << _energyPoints << " left)" << std::endl;

	return ;
}
