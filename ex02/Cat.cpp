/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:25:46 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 13:01:45 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor of Cat\n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &original)
{
	std::cout << "Copy Constructor of Cat\n";
	this->type = original.getType();
	this->brain = new Brain(*original.brain);
}

Cat::~Cat()
{
	std::cout << "Distructor of Cat\n";
	delete brain;
}

Cat &Cat::operator=(const Cat &original)
{
	std::cout << "= operator overloading\n";
	if (this != &original)
	{
		this->type = original.getType();
		this->brain = new Brain(*original.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat makes sound: Niarrr\n";
}

