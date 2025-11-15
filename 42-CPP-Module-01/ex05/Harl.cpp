/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:50:01 by edurance          #+#    #+#             */
/*   Updated: 2025/11/10 10:56:21 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl constructor called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	// std::cout << "Harl destructor called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	return ;
}

void	Harl::complain(std::string level)
{
	std::string	calls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*_levels[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (level == calls[i])
		{
			(this->*_levels[i])();
			return ;
		}
	}
	std::cout << "Error: Level doesnt exist" << std::endl;
}
