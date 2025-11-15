/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:39:44 by edurance          #+#    #+#             */
/*   Updated: 2025/11/14 11:52:25 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);

		Brain&	operator=(const Brain& other);
};

#endif
