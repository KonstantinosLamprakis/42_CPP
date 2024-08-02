/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:56:46 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 14:34:18 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< "I really do!\n";
}

void Harl::info( void )
{
	cout << "I cannot believe adding extra bacon costs more money."
	<< " You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
	cout << "I think I deserve to have some extra bacon for free."
	<< "I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
	cout << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl::Harl() {};

Harl::~Harl() {};

void Harl::complain( std::string level )
{
	int	i = -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// typedef void (Harl::* level_functs_arr) (void);
	void (Harl::*level_functs_arr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (level != levels[++i])
		if (i == 3)
			return ;
	(this->*level_functs_arr[i])();
}
