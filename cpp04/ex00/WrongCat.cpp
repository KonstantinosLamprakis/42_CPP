/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 09:38:46 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 09:38:53 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "Default Constructor of WrongCat\n";
}

WrongCat::WrongCat(const WrongCat &original)
{
	std::cout << "Copy Constructor of WrongCat\n";
	this->type = original.getType();
}

WrongCat::~WrongCat()
{
	std::cout << "Distructor of WrongCat\n";
}

WrongCat &WrongCat::operator=(const WrongCat &original)
{
	std::cout << "= operator overloading\n";
	if (this != &original)
		this->type = original.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat makes sound: Niarrr\n";
}

