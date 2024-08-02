/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:34:57 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 12:32:21 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

// #include "header.hpp"
#include "Weapon.hpp"

class HumanA
{
private:
	string _name;
	Weapon *_weapon;

public:
	HumanA(string name, Weapon &weapon);
	~HumanA();
	void attack(void);
	Weapon getWeapon(void) const;
	string getName(void) const;
	void setWeapon(Weapon &weapon);
	void setName(string name);
};
#endif
