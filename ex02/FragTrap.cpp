/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:46:09 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 16:27:56 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor of " << this->getName() << std::endl;
	this->setAttackDamage(30);
	this->setHealthPoints(100);
	this->setNrgPoints(100);
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor of " << this->getName() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap distructor of " << this->getName() << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->getNrgPoints() < 1)
	{
		std::cout << "Not enough energy points for FragTrap " << this->getName() << " to attack " << target << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->getName() << " attacks to " << target << " causing damage of " << this->getAttackDamage() << std::endl;
	this->setNrgPoints(this->getNrgPoints() - 1);

}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " give a big HiFive to every one, new nrgpoints: " << std::endl;
}
