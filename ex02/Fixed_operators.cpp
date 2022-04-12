/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operators.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:55:32 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/12 19:22:23 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator= (const Fixed &equal)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = equal.getRawBits();
	return (*this);
}

//COMPARISON OPERATORS
bool	Fixed::operator> (const Fixed& fixed) const
{
	std::cout << "Greater than operator called" << std::endl;
	if (this->_value > fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator< (const Fixed& fixed) const
{
	std::cout << "Less than operator called" << std::endl;
	if (this->_value < fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>= (const Fixed& fixed) const
{
	std::cout << "Greater than or equal operator called" << std::endl;
	if (this->_value >= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<= (const Fixed& fixed) const
{
	std::cout << "Less than or equal operator called" << std::endl;
	if (this->_value <= fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator== (const Fixed& fixed) const
{
	std::cout << "Equal operator called" << std::endl;
	if (this->_value == fixed.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!= (const Fixed& fixed) const
{
	std::cout << "Not equal operator called" << std::endl;
	if (this->_value != fixed.getRawBits())
		return (true);
	return (false);
}

//ARITHMETIC OPERATORS

Fixed&	Fixed::operator+ (const Fixed& fixed) const
{
	Fixed	out;
	std::cout << "Plus operator called" << std::endl;
	out._value = this->_value + fixed.getRawBits();
	return (out);
}

Fixed&	Fixed::operator- (const Fixed& fixed) const
{
	Fixed	out;
	std::cout << "Minus operator called" << std::endl;
	out._value = this->_value - fixed.getRawBits();
	return (out);
}

Fixed&	Fixed::operator* (const Fixed& fixed) const
{
	Fixed	out;
	std::cout << "Multiply operator called" << std::endl;
	out._value = this->_value * fixed.getRawBits() >> this->_point;
	return (out);
}

Fixed&	Fixed::operator/ (const Fixed& fixed) const
{
	Fixed	out;
	std::cout << "Divide operator called" << std::endl;
	out._value = this->_value * fixed.getRawBits() >> this->_point;
	return (out);
}