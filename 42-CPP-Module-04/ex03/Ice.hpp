/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:19:03 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 15:59:21 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& other);
		~Ice(void);

		Ice&	operator=(const Ice& other);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
