/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:42:31 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 11:18:58 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zomb_ptr = zombieHorde(10, "Raul");

	zomb_ptr[0].announce();
	zomb_ptr[8].announce();
	delete[] (zomb_ptr);
}
