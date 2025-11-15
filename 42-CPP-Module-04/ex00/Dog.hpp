/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:37:09 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 10:44:44 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog& other);
		~Dog(void);

		Dog&	operator=(const Dog& other);

		void	makeSound(void) const;
};

#endif
