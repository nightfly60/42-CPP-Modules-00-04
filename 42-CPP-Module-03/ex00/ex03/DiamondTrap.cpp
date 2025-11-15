/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:51:25 by edurance          #+#    #+#             */
/*   Updated: 2025/11/13 16:01:29 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name"), FragTrap(), ScavTrap()
{
	this->_name = "";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Default constructor called for DiamondTrap" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Constructor called for DiamondTrap " << name << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other)
{
	this->_name = other._name;
	std::cout << "Copy constructor called for DiamondTrap " << _name << std::endl;

	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: Default destructor called " << _name << std::endl;

	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this == &other)
		return (*this);

	this->_name = other._name;
	ClapTrap::_name = other.ClapTrap::_name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;

	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	std::cout << "[DiamondTrap attacking] : ";
	ScavTrap::attack(target);

	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name: " << _name << " | clap name: " << ClapTrap::_name << std::endl;

	return ;
}
