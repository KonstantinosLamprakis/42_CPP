/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:25:43 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 09:36:51 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default Constructor of Dog\n";
}

Dog::Dog(const Dog &original)
{
	std::cout << "Copy Constructor of Dog\n";
	this->type = original.getType();
}

Dog::~Dog()
{
	std::cout << "Distructor of Dog\n";
}

Dog &Dog::operator=(const Dog &original)
{
	std::cout << "= operator overloading\n";
	if (this != &original)
		this->type = original.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog makes sound: Waf Waf\n";
}

