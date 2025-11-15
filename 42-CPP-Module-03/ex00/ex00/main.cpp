/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:17:40 by edurance          #+#    #+#             */
/*   Updated: 2025/11/13 11:30:30 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "================== Create 4 ClapTraps ==================" << std::endl;
	ClapTrap	a("Elena");
	ClapTrap	b("Lucas");
	ClapTrap	c;
	ClapTrap	d("Anas");

	c = b;
	std::cout << std::endl;

	std::cout << "============= Attacks (with default damage) ============" << std::endl;
	a.attack("Lucas");
	b.attack("Anas");
	d.attack("Elena");
	std::cout << std::endl;

	std::cout << "================= Damages on ClapTraps =================" << std::endl;
	a.takeDamage(5);
	b.takeDamage(10);
	c.takeDamage(15);
	std::cout << std::endl;

	std::cout << "==================== Repairing (10) ====================" << std::endl;
	b.beRepaired(10);
	std::cout << std::endl;

	return (0);
}
