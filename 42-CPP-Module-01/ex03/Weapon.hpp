/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:57:04 by edurance          #+#    #+#             */
/*   Updated: 2025/11/08 20:56:48 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);

		const std::string&	getType(void);
		void				setType(const std::string& new_type);
};

#endif