/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:21:52 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 11:54:02 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(Cat& other);
		~Cat(void);

		Cat&	operator=(const Cat& other);

		void	makeSound(void) const;
};

#endif
