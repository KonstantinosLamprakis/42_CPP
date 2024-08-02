/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 08:18:04 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 15:39:49 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _healthPoints(10), _nrgPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor of " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	this->_name = obj.getName();
	this->_attackDamage = obj.getAttackDamage();
	this->_nrgPoints = obj.getNrgPoints();
	this->_healthPoints = obj.getAttackDamage();
	std::cout << "Copy ClapTrap constructor of " << this->_name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap distructor of " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Assigment operator of " << this->_name << std::endl;
	this->_name = obj.getName();
	this->_attackDamage = obj.getAttackDamage();
	this->_nrgPoints = obj.getNrgPoints();
	this->_healthPoints = obj.getAttackDamage();
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_nrgPoints < 1)
	{
		std::cout << "Not enough energy points for ClapTrap " << this->_name << " to attack " << target << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks to " << target << " causing damage of " << this->_attackDamage << std::endl;
	this->_nrgPoints--;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_healthPoints -= amount;
	if (this->_healthPoints < 0)
		this->_healthPoints = 0;
	std::cout << this->_name << " got damaged " << amount << ". New health points are " << this->_healthPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_nrgPoints < 1)
	{
		std::cout << "Not enough energy points for " << this->_name << " to be repaired\n";
		return ;
	}
	this->_healthPoints += amount;
	this->_nrgPoints--;
	std::cout << this->_name << " is repaired by " << amount << ". New health points are " << this->_healthPoints << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHealthPoints() const
{
	return (this->_healthPoints);
}

int ClapTrap::getNrgPoints() const
{
	return (this->_nrgPoints);
}

int ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

void ClapTrap::setAttackDamage(int amount)
{
	this->_attackDamage = amount;
	std::cout << this->_name << " set a damage of " << amount << std::endl;
}

void ClapTrap::setHealthPoints(int amount)
{
	this->_healthPoints = amount;
}

void ClapTrap::setNrgPoints(int amount)
{
	this->_nrgPoints = amount;
}
