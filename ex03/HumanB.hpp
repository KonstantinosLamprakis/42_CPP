/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:35:02 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 12:34:45 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

// #include "header.hpp"
#include "Weapon.hpp"

class HumanB
{
private:
	string _name;
	Weapon *_weapon;

public:
	HumanB(string name);
	~HumanB();
	void attack(void);
	Weapon getWeapon(void) const;
	string getName(void) const;
	void setWeapon(Weapon &weapon);
	void setName(string name);
};
#endif
