/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:56:53 by edurance          #+#    #+#             */
/*   Updated: 2025/11/09 09:53:38 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
	// std::cout << "Weapon constructor called with type: " << type << std::endl;
	return ;
}

Weapon::Weapon(void)
{
	// std::cout << "Weapon constructor called" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	// std::cout << "Weapon destructor called" << std::endl;
	return ;
}

const std::string &Weapon::getType(void)
{
	const std::string &type_ref = this->_type;
	return (type_ref);
}

void Weapon::setType(const std::string &new_type)
{
	this->_type = new_type;
}
