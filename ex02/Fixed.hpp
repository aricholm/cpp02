/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:06 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/12 19:15:55 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_point = 8;
	static const float	_power = 1 << _point;
public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int integer);
	Fixed(const float flt);
	~Fixed();

	Fixed&	operator= (const Fixed& equal);
	bool	operator> (const Fixed& fixed) const;
	bool	operator< (const Fixed& fixed) const;
	bool	operator!= (const Fixed& fixed) const;
	bool	operator== (const Fixed& fixed) const;
	bool	operator>= (const Fixed& fixed) const;
	bool	operator<= (const Fixed& fixed) const;

	Fixed&	operator+ (const Fixed& fixed) const;
	Fixed&	operator- (const Fixed& fixed) const;
	Fixed&	operator* (const Fixed& fixed) const;
	Fixed&	operator/ (const Fixed& fixed) const;
	
	int		getRawBits() const;
	void	setRawBits(const int raw);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream&	operator<< (std::ostream& o, const Fixed& fixed);
	
#endif /* FIXED_HPP */
