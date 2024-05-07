/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:42:31 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 10:56:34 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zomb;
	Zombie *zomb_ptr;

	zomb.setName("Konstantinos");
	zomb.announce();
	zomb_ptr = newZombie("Anita");
	zomb_ptr->announce();
	randomChump("Test");
	delete(zomb_ptr);
}
