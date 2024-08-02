/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:27:29 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/08 19:45:51 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {};

Point::Point(const float x, const float y): x(Fixed(x)), y(Fixed(y)) {};

Point::Point(const Point &p)
{
	*this = p;
}

Point::~Point(){};

Point &Point::operator=(const Point &p)
{
	(Fixed)this->x = p.getX();
	(Fixed)this->y = p.getY();
	return (*this);
}

Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}


