/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:55:47 by edurance          #+#    #+#             */
/*   Updated: 2025/11/09 10:24:56 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	//this->_name = name;
	//this->_weapon = weapon;
	// std::cout << "HumanA constructor called";

	return ;
}

HumanA::~HumanA(void)
{
	// std::cout << "HumanA destructor called";
	return ;
}

void	HumanA::attack(void)
{
	const std::string& ref = this->_weapon.getType();
	std::cout << this->_name << " attacks with their " << ref << std::endl;
}
