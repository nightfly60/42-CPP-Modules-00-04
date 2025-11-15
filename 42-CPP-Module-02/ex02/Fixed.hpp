/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:26:35 by edurance          #+#    #+#             */
/*   Updated: 2025/11/11 12:39:20 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_rawValue;
		static const int	_fractionalBits;

	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);

		Fixed&	operator=(const Fixed& other);
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&		min(Fixed& first, Fixed& second);
		static const Fixed&	min(const Fixed& first, const Fixed& second);
		static Fixed&		max(Fixed& first, Fixed& second);
		static const Fixed&	max(const Fixed& first, const Fixed& second);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& other);

#endif
