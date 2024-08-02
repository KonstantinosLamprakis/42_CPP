/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:03:13 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/08 07:23:18 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	cout << "Default constructor called\n";
}

Fixed::Fixed(const int num): _value(num * (1 << this->_bits))
{
	cout << "Int constructor called\n";
}

Fixed::Fixed(const float num): _value(roundf(num * (1 << this->_bits)))
{
	cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
	cout << "Copy constructor called\n";
	this->_value = a.getRawBits();
	// *this = a;
}

Fixed::~Fixed()
{
	cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &a)
{
	cout << "Copy assignment operator called\n";
	this->_value = a.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	cout << "getRawBits member function called\n";
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return (((float)this->_value) / ((float)(1 << this->_bits)));
}

int Fixed::toInt( void ) const
{
	return (this->_value / (1 << this->_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	return (os << obj.toFloat());
}

