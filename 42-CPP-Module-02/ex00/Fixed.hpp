/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:26:35 by edurance          #+#    #+#             */
/*   Updated: 2025/11/11 11:43:47 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_rawValue;
		static const int	_fractionalBits;

	public:
		Fixed(void);
		~Fixed(void);

		Fixed(const Fixed& other);
		Fixed&	operator=(const Fixed& other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
