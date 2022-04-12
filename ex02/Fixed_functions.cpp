/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_functions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:56:22 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/12 18:56:49 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::getRawBits() const
{
	std::cout << "getRawbits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawbits member function called" << std::endl;
	_value = raw;
}

int		Fixed::toInt() const
{
	std::cout << "toInt member function called" << std::endl;
	return (_value >> _point);
}

float	Fixed::toFloat() const
{
	std::cout << "toFloat member function called" << std::endl;
	return (_value / _power);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}
