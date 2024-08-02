/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 08:18:12 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 15:40:14 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int	_healthPoints;
		int	_nrgPoints;
		int	_attackDamage;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
		int getHealthPoints() const;
		int getNrgPoints() const;
		int getAttackDamage() const;
		void setAttackDamage(int amount);
		void setHealthPoints(int amount);
		void setNrgPoints(int amount);
};

#endif
