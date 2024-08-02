/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:01:53 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 16:26:02 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor of " << this->getName() << std::endl;
	this->setAttackDamage(20);
	this->setHealthPoints(100);
	this->setNrgPoints(50);
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor of " << this->getName() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap distructor of " << this->getName() << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << "  is now in Gatekeeper mode, new nrgpoints: " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getNrgPoints() < 1)
	{
		std::cout << "Not enough energy points for ScavTrap " << this->getName() << " to attack " << target << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks to " << target << " causing damage of " << this->getAttackDamage() << std::endl;
	this->setNrgPoints(this->getNrgPoints() - 1);

}
