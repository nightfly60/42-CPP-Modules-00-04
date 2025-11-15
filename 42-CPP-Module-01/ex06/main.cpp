/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:04:58 by edurance          #+#    #+#             */
/*   Updated: 2025/11/10 11:07:25 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl	Elena;

	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter <argument>" << std::endl;
		return (1);
	}

	Elena.complain(av[1]);
	return (0);
}
