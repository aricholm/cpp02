/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:00 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/12 18:57:20 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// CONSTRUCTORS
Fixed::Fixed() : _value(0)	{ std::cout << "Default constructor called" << std::endl; } 
Fixed::~Fixed()				{ std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = integer << _point;
}

Fixed::Fixed(const float flt)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(flt * _power);
}

Fixed::Fixed(const Fixed& copy) : _value(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}
