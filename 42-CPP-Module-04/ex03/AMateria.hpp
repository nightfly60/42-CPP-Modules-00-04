/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:00:27 by edurance          #+#    #+#             */
/*   Updated: 2025/11/15 11:21:51 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		const std::string	_type;

	public:
		AMateria(const std::string& type);
		AMateria(void);
		AMateria(const AMateria& other);
		virtual ~AMateria(void);

		AMateria&	operator=(const AMateria& other);

		const std::string&	getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
