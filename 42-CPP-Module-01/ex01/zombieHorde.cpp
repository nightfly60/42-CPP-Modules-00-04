/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:23:26 by edurance          #+#    #+#             */
/*   Updated: 2025/11/08 14:39:02 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombieTable = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombieTable[i].SetName(name);

	return (zombieTable);
}
