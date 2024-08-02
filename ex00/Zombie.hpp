/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:42:37 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 10:17:39 by klamprak         ###   ########.fr       */
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

Zombie* newZombie( std::string name );

void randomChump( std::string name );
