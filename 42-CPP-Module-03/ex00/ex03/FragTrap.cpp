/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:22:40 by edurance          #+#    #+#             */
/*   Updated: 2025/11/13 15:02:57 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Default constructor called for FragTrap" << std::endl;

	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Constructor called for FragTrap " << name << std::endl;

	return ;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "Copy constructor called for FragTrap " << _name << std::endl;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Default destructor called " << _name << std::endl;

	return ;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this == &other)
		return (*this);

	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;

	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << "[FragTrap attacking] : ";
	ClapTrap::attack(target);

	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " high-fives !" << std::endl;

	return ;
}
