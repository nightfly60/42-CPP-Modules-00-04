/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:04:58 by edurance          #+#    #+#             */
/*   Updated: 2025/11/10 10:24:31 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::cout << "========== Creating 1 Harl -> Elena ==========" << std::endl;
	Harl	Elena;
	std::cout << std::endl;

	std::cout << "========== Calling complain with DEBUG ==========" << std::endl;
	Elena.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "========== Calling complain with INFO ==========" << std::endl;
	Elena.complain("INFO");
	std::cout << std::endl;

	std::cout << "========== Calling complain with WARNING ==========" << std::endl;
	Elena.complain("WARNING");
	std::cout << std::endl;

	std::cout << "========== Calling complain with ERROR ==========" << std::endl;
	Elena.complain("ERROR");
	std::cout << std::endl;

	std::cout << "========== Calling complain with NON EXISTING LEVEL ==========" << std::endl;
	Elena.complain("");
	std::cout << std::endl;

	return (0);
}
