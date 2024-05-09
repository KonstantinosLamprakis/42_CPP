/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 08:18:10 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 09:58:56 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap raul("Raul");
	ClapTrap paul("Paul");
	raul.setAttackDamage(5);
	paul.setAttackDamage(11);

	raul.attack(paul.getName());
	paul.takeDamage(raul.getAttackDamage());
	paul.beRepaired(4);

	paul.attack(raul.getName());
	raul.takeDamage(paul.getAttackDamage());
	raul.beRepaired(11);

	for (int i = 0; i < 11; i++)
		paul.beRepaired(1);
}
