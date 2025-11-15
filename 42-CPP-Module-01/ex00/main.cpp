/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:00:37 by edurance          #+#    #+#             */
/*   Updated: 2025/11/08 16:51:06 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "=========== create 2 zombies (1 stack + 1 heap) ===========" << std::endl;
	Zombie	*newZ = newZombie("Elena");
	Zombie	newZbis("Lucas");
	std::cout << std::endl;

	std::cout << "=========== announce 2 zombies ===========" << std::endl;
	newZbis.announce();
	newZ->announce();
	std::cout << std::endl;

	std::cout << "=========== delete 1 zombie ===========" << std::endl;
	delete(newZ);
	std::cout << std::endl;

	std::cout << "=========== create 2 randomChumps (stack and announce) ===========" << std::endl;
	randomChump("Anas");
	randomChump("Daniel");
	std::cout << std::endl;

	return (0);
}
