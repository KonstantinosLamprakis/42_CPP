/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:34:55 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 12:32:25 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon): _name(name), _weapon(&weapon) {};

HumanA::~HumanA() {};

void HumanA::attack(void)
{
	cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
}

Weapon HumanA::getWeapon(void) const
{
	return (*(this->_weapon));
}

string HumanA::getName(void) const
{
	return (this->_name);
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanA::setName(string name)
{
	this->_name = name;
}

