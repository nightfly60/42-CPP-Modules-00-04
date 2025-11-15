/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:17:40 by edurance          #+#    #+#             */
/*   Updated: 2025/11/13 15:57:36 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	std::cout << "====== Creating DiamondTrap ======" << std::endl;
	DiamondTrap	dia1("Daniel");
	dia1.attack("Target 1");
	dia1.takeDamage(80);
	dia1.beRepaired(70);
	std::cout << std::endl;
	dia1.whoAmI();
	std::cout << std::endl;

	std::cout << "====== Copying DiamondTrap (=) ======" << std::endl;
	DiamondTrap	dia2;
	dia2 = dia1;
	dia2.attack("Target 2");
	std::cout << std::endl;
	dia2.whoAmI();
	std::cout << std::endl;

	std::cout << "====== Copying DiamondTrap (constructor) ======" << std::endl;
	DiamondTrap	dia3(dia2);
	dia3.attack("Target 3");
	std::cout << std::endl;
	dia3.whoAmI();
	std::cout << std::endl;

	return (0);
}
