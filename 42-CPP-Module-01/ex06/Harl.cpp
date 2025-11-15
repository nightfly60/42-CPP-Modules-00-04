/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:50:01 by edurance          #+#    #+#             */
/*   Updated: 2025/11/10 11:07:43 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	// std::cout << "Harl constructor called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	// std::cout << "Harl destructor called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
	std::cout << std::endl;

	return ;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
	std::cout << std::endl;

	return ;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
	std::cout << std::endl;

	return ;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::string	calls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (level == calls[i])
			break ;
	}

	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
