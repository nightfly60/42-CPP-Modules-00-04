/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:00:37 by edurance          #+#    #+#             */
/*   Updated: 2025/11/08 16:50:25 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "=========== create 2 Zombie Horde (5 each) ===========" << std::endl;
	Zombie	*Horde = zombieHorde(5, "Chili");
	Zombie	*Hordebis = zombieHorde(5, "Beans");
	std::cout << std::endl;

	std::cout << "=========== announce Chili ===========" << std::endl;
	for (int i = 0; i < 5; i++)
		Horde[i].announce();
	std::cout << std::endl;

	std::cout << "=========== announce Beans ===========" << std::endl;
	for (int i = 0; i < 5; i++)
		Hordebis[i].announce();
	std::cout << std::endl;

	std::cout << "=========== delete Chili Horde ===========" << std::endl;
	delete [] Horde;
	std::cout << std::endl;
	std::cout << "=========== delete Beans Horde ===========" << std::endl;
	delete [] Hordebis;

	return (0);
}
