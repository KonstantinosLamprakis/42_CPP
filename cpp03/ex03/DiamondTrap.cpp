/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:46:09 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 17:37:56 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	ScavTrap::_nrgPoints = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj): ClapTrap(obj)
{
	std::cout << "DiamondTrap copy constructor of " << this->getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap distructor of " << this->getName() << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap names:\nClapTrap: " << this->getName() << "\nDiamondTrap: " << this->_name << std::endl;
}

