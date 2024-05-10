/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:25:49 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 10:43:37 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		Animal();
		Animal(const Animal &original);
		Animal &operator=(const Animal &original);
		std::string type;

	public:
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};

#endif
