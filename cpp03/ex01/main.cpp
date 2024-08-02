/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 08:18:10 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 16:24:23 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap raul("Raul");
	raul.guardGate();
	ClapTrap paul("Paul");
	paul.setAttackDamage(11);

	raul.attack(paul.getName());
	paul.takeDamage(raul.getAttackDamage());
	paul.beRepaired(4);

	paul.attack(raul.getName());
	raul.takeDamage(paul.getAttackDamage());
	raul.beRepaired(11);
}
