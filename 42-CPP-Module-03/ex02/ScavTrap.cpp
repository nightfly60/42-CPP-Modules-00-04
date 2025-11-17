/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:49:27 by edurance          #+#    #+#             */
/*   Updated: 2025/11/13 14:59:07 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default constructor called for ScavTrap" << std::endl;

	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Constructor called for ScavTrap " << name << std::endl;

	return ;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor called for ScavTrap " << _name << std::endl;

	return ;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
		return (*this);

	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Default destructor called " << _name << std::endl;

	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "[ScavTrap attacking] : ";
	ClapTrap::attack(target);

	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;

	return ;
}
