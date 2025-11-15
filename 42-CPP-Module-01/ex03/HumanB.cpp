/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:56:08 by edurance          #+#    #+#             */
/*   Updated: 2025/11/09 10:25:18 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
	// std::cout << "HumanB constructor called";

	return ;
}

HumanB::HumanB(void)
{
	// std::cout << "HumanB constructor called";
	return ;
}

HumanB::~HumanB(void)
{
	// std::cout << "HumanB destructor called";
	return ;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type;
}

void	HumanB::attack(void)
{
	if (!this->_weapon)
	{
		std::cout << this->_name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
