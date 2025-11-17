/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:19:03 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 15:59:16 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& other);
		~Cure(void);

		Cure&	operator=(const Cure& other);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
