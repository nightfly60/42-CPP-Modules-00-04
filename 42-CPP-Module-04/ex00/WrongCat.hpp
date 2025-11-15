/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:21:52 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 11:10:18 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat& other);
		~WrongCat(void);

		WrongCat&	operator=(const WrongCat& other);

		void	makeSound(void) const;
};

#endif
