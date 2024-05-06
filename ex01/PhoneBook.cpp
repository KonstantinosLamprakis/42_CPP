/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 07:05:40 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/06 15:54:29 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact new_con)
{
	for (int i = phone_size - 1; i >= 0; i--)
		contacts[i] = contacts[i - 1];
	contacts[0] = new_con;
}

string PhoneBook::get_formated_output(string str)
{
	string result;

	if (str.length() <= 10)
		return (str);
	result = str.substr(0, 10);
	result[10] = '.';
	return (result);
}

void PhoneBook::search_contact(void) const
{
	print_contacts();
}

void PhoneBook::print_contacts(void) const
{
	if (phone_size < 1)
	{
		cout << "Nothing to desplay\n";
		return ;
	}
	cout << "\n|     Index|First Name| Last Name|  Nickname|\n";
	for (int i = 0; i < phone_size; i++)
	{
		cout 	<< "|" << i << "\n" << "|"
				<< "|" << get_formated_output(contacts[i].getFirstname()) << "|" << "\n"
				<< "|" << get_formated_output(contacts[i].getLastname()) << "|" << "\n"
				<< "|" << get_formated_output(contacts[i].getNickname()) << "|" << "\n";
	}
}
void PhoneBook::print_single_contact(int index) const
{
	if (!(index >= 0 && index < phone_size))
	{
		cout << "Invalid index\n";
		return ;
	}
	cout 	<< "Firstname: " << contacts[index].getFirstname() << "\n"
			<< "Lastname: " << contacts[index].getLastname() << "\n"
			<< "Nickname: " << contacts[index].getNickname() << "\n"
			<< "Phone number: " << contacts[index].getPhonenumber() << "\n"
			<< "Darkest secret: " << contacts[index].getSecret() << "\n";

}
