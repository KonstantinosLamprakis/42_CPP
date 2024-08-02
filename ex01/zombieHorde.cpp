/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:07:57 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 11:14:46 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *new_zomb;

	if (!N)
		return (NULL);
	new_zomb = new Zombie[N];
	for (int i = 0; i < N; i++)
		new_zomb[i].setName(name);
	return (new_zomb);
}
