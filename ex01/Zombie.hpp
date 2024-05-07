/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:42:37 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 11:07:54 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::string;

class Zombie
{
	private:
		string _name;

	public:
		Zombie();
		Zombie(string name);
		~Zombie();
		void announce( void );
		string getName(void);
		void setName(string name);
};

Zombie* zombieHorde( int N, std::string name );
