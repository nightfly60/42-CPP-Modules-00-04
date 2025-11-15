/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:00:02 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 13:18:38 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal& other);
		virtual ~Animal(void);

		Animal&	operator=(const Animal& other);

		std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;
};

#endif
