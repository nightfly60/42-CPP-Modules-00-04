/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:56:06 by edurance          #+#    #+#             */
/*   Updated: 2025/11/09 10:23:51 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
	private:
		Weapon		*_weapon;
		std::string	_name;

	public:
		HumanB(std::string name);
		HumanB(void);
		~HumanB(void);

		void	setWeapon(Weapon& type);
		void	attack(void);
};

#endif