/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:42:36 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 11:07:06 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::Zombie(string name): _name(name) {};

Zombie::~Zombie()
{
	cout << "Destroyed: " << _name << std::endl;
}

void Zombie::announce( void )
{
	cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

string Zombie::getName(void)
{
	return (this->_name);
}

void Zombie::setName(string name)
{
	this->_name = name;
}
