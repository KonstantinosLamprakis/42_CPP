/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:35:00 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 12:34:31 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name): _name(name), _weapon(NULL) {};

HumanB::~HumanB() {};

void HumanB::attack(void)
{
	if (_weapon)
		cout << this->_name << " attacks with their " << _weapon->getType() << std::endl;
	else
		cout << this->_name << " cant attack without weapon\n";
}

Weapon HumanB::getWeapon(void) const
{
	return (*(this->_weapon));
}

string HumanB::getName(void) const
{
	return (this->_name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::setName(string name)
{
	this->_name = name;
}

