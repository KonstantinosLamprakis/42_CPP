/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:37:48 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 21:04:03 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cout;
using std::string;

class Fixed
{
	private:
		int _value;
		const static int _bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &a);
		~Fixed();
		Fixed& operator=(const Fixed &a);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
#endif
