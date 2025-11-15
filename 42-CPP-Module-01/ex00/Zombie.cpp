/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:01:22 by edurance          #+#    #+#             */
/*   Updated: 2025/11/08 14:35:19 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called on Zombie: " << _name << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::string	name;

	name = this->_name;
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
