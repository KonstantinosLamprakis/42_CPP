/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:03:13 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 21:13:20 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	cout << "Default constructor called\n";
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

