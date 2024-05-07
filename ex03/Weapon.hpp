/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:35:19 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 11:46:30 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "header.hpp"

class Weapon
{
	private:
		string _type;

	public:
		Weapon();
		Weapon(string type);
		~Weapon();
		const string &getType(void) const;
		void setType(string type);
};
#endif

