/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 08:18:10 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 17:34:56 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap raul("Raul");
	raul.whoAmI();
	raul.highFivesGuys();
	raul.guardGate();

	std::cout << "DiamondTrap constructor of " << raul.getName() << std::endl;
	std::cout << "Hit Points: " << raul.getHealthPoints() << std::endl;
	std::cout << "Energy Points: " << raul.getNrgPoints() << std::endl;
	std::cout << "Attack Damage: " << raul.getAttackDamage() << std::endl;
}
