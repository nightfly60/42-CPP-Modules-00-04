/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:00:19 by edurance          #+#    #+#             */
/*   Updated: 2025/11/15 10:41:33 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_storage[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		~MateriaSource(void);

		MateriaSource&	operator=(const MateriaSource& other);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
};

#endif
