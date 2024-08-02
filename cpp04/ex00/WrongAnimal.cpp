/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 09:12:44 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 09:40:07 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << "Constructor of WrongAnimal\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
	this->type = original.getType();
	std::cout << "Copy constructor of WrongAnimal\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Distructor of WrongAnimal\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
	std::cout << "= operator overloading\n";
	if (this != &original)
		this->type = original.getType();
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make sound: Wooooo\n";
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
