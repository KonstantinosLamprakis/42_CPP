/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 07:09:25 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/06 15:49:46 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

#include "header.hpp"

string get_input(void);

int	main(void)
{
	string input;
	PhoneBook phone_book;

	cout <<
	"Welcome to \"My Awesome PhoneBook\"\n"
	"	ADD - Add a new contact			\n"
	"	SEARCH - Search for a contact	\n"
	"	EXIT - Exit the program			\n"
	<< endl;
	while (42)
	{
		input = get_input();
		if (input == "EXIT")
			exit(0);
		else if (input == "SEARCH")
		{
			cout << "todo search";
			phone_book.search_contact();
		}
		else if (input == "ADD")
			cout << "todo";
	}
}

string get_input(void)
{
	string input;

	while (1)
	{
		cout << "~> ";
		getline(cin, input);
		if (cin.eof() == true)
		{
			cin.clear();
			clearerr(stdin);
		}
		if (input == "SEARCH" || input == "ADD" || input == "EXIT")
			break;
		cin.clear();
	}
	return input;
}
