/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:56:51 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 15:00:03 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void call_complain(std::string str);

int main(int argc, char **argv)
{
	if(argc != 2)
		return (cout << "Wrong number of args\n", 0);
	int	i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && (argv[1] != levels[i]))
		i++;
	switch (i)
	{
		case 0:
			call_complain("DEBUG");
		case 1:
			call_complain("INFO");
		case 2:
			call_complain("WARNING");
		case 3:
			call_complain("ERROR");
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]\n";
	}
	return (0);
}

void call_complain(std::string str)
{
	Harl harlObj;

	cout << "[ " << str <<" ]\n";
	harlObj.complain(str);
}
