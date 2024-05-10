/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:24:57 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 10:29:16 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* j = new Dog();
	const Animal* k = new Cat();
	Animal *an_arr[100];

	for (int i = 0; i < 50; i++)
		an_arr[i] = new Dog();

	for (int i = 50; i < 100; i++)
		an_arr[i] = new Cat();

	for (int i = 0; i < 100; i++)
		delete an_arr[i];

	delete j;//should not create a leak
	delete k;
	system("leaks program");
}
