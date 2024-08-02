/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:42:31 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 11:29:54 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cout;

int	main(void)
{
	string hi_str = "HI THIS IS BRAIN";
	string *stringPTR = &hi_str;
	string &stringREF = hi_str;

	cout << "Addresses:\n";
	cout << "\thi_str: " << &hi_str << "\n";
	cout << "\tstringPTR: " << stringPTR << "\n";
	cout << "\tstringREF: " << &stringREF << "\n" << "\n";
	cout << "Values:\n";
	cout << "\thi_str: " << hi_str << "\n";
	cout << "\tstringPTR: " << *stringPTR << "\n";
	cout << "\tstringREF: " << stringREF << "\n";
}
