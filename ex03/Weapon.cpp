/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:35:15 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 11:46:34 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(): _type("") {};
Weapon::Weapon(string type): _type(type) {};
Weapon::~Weapon(){};

const string &Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(string type)
{
	this->_type = type;
}
