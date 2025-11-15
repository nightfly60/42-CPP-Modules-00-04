/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:54:54 by edurance          #+#    #+#             */
/*   Updated: 2025/11/09 09:45:36 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/*
int main(void)
{
	std::cout << "========== Creating 3 weapons ==========" << std::endl;
	std::cout << "- Creating AK weapon" << std::endl;
	Weapon Ak = Weapon("Ak47");
	std::cout << "- Creating fist weapon" << std::endl;
	Weapon fist = Weapon("fists");
	std::cout << "- Creating pistol weapon" << std::endl;
	Weapon pistol = Weapon("pistol");
	std::cout << std::endl;

	std::cout << "========== Creating 2 HumanA ==========" << std::endl;
	std::cout << "- Creating HumanA Elena" << std::endl;
	HumanA Elena = HumanA("Elena", Ak);
	std::cout << "- Creating HumanA Lucas" << std::endl;
	HumanA Lucas = HumanA("Lucas", fist);
	std::cout << std::endl;

	std::cout << "========== Creating 1 HumanB ==========" << std::endl;
	std::cout << "- Creating HumanB Anas" << std::endl;
	HumanB Anas = HumanB("Anas");
	std::cout << std::endl;

	std::cout << "========== Attacks Anas ==========" << std::endl;
	Anas.attack();
	std::cout << "- Set Anas weapon pistol" << std::endl;
	Anas.setWeapon(pistol);
	Anas.attack();
	std::cout << std::endl;

	std::cout << "========== Attacking with HumanA ==========" << std::endl;
	Elena.attack();
	Lucas.attack();
	std::cout << std::endl;

	std::cout << "========== Attacks Anas ==========" << std::endl;
	std::cout << "- Changing Weapon type" << std::endl;
	fist.setType("bloody fists");
	std::cout << "- Set Anas weapon fist (changed)" << std::endl;
	Anas.setWeapon(fist);
	Anas.attack();
	std::cout << std::endl;

	return (0);
}*/

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
