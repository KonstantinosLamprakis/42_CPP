/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:03:11 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 10:30:19 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea " + std::to_string(i);
	std::cout << "Default Constructor of Brain\n";
}

Brain::Brain(const Brain &original)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = original.ideas[i];
	std::cout << "Copy Constructor of Brain\n";
}

Brain::~Brain()
{
	std::cout << "Distructor of Brain\n";
}

Brain &Brain::operator=(const Brain &original)
{
	if (this != &original)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = original.ideas[i];
	}
	std::cout << "= operator overloading\n";
	return (*this);
}
