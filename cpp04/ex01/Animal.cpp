/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:28:32 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 09:30:55 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << "Default Constructor of Animal\n";
}

Animal::Animal(const Animal &original)
{
	this->type = original.getType();
	std::cout << "Copy Constructor of Animal\n";
}

Animal::~Animal()
{
	std::cout << "Distructor of Animal\n";
}

Animal &Animal::operator=(const Animal &original)
{
	std::cout << "= operator overloading\n";
	if (this != &original)
		this->type = original.getType();
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal makes sound: Wooooo\n";
}

std::string Animal::getType() const
{
	return (this->type);
}
