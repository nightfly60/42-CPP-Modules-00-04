/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:17:40 by edurance          #+#    #+#             */
/*   Updated: 2025/11/13 12:50:29 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "====== Creating ClapTrap ======" << std::endl;
	ClapTrap	clap1("Elena");
	clap1.attack("Target 1");
	clap1.takeDamage(10);
	clap1.beRepaired(5);
	std::cout << std::endl;

	std::cout << "====== Creating ScavTrap ======" << std::endl;
	ScavTrap	scav1("Anas");
	scav1.attack("Target 2");
	scav1.takeDamage(15);
	scav1.beRepaired(10);
	scav1.guardGate();
	std::cout << std::endl;

	std::cout << "====== Copying ScavTrap ======" << std::endl;
	ScavTrap	scav2 = scav1;
	scav2.attack("Target 3");
	std::cout << std::endl;

	return (0);
}
