/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 07:05:40 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/06 20:46:06 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : phone_size(0), last_index(0) {};
PhoneBook::~PhoneBook() {};

void PhoneBook::add_contact(Contact new_con)
{
	if (this->phone_size < 8)
	{
		this->last_index = 0;
		contacts[this->phone_size++] = new_con;
		return ;
	}
	contacts[last_index] = new_con;
	last_index++;
	last_index %= 8;
}

string PhoneBook::get_formated_output(string str)
{
	string result;
	string temp = "          ";

	if (str.length() <= 10)
	{
		result = temp.substr(0, 10 - str.length()) + str;
		return (result);
	}
	result = str.substr(0, 10);
	result[9] = '.';
	return (result);
}

void PhoneBook::get_contact_input(void)
{
	int i;
	Contact	new_contact;
	std::string	input;

	get_from_input("First name: ", &Contact::setFirstname, new_contact);
	get_from_input("Last name: ", &Contact::setLastname, new_contact);
	get_from_input("Nickname: ", &Contact::setNickname, new_contact);
	while (42)
	{
		cout << "Phone number: ";
		getline(cin, input);
		i = 0;
		while (!input.empty() && std::isdigit(input[i]))
			i++;
		if (input.empty() || input[i])
		{
			cin.clear();
			cout << "Invalid phone number, try again." << endl;
			continue;
		}
		new_contact.setPhonenumber(input);
		break;
	}
	get_from_input("Darkest secret: ", &Contact::setSecret, new_contact);
	this->add_contact(new_contact);
	cout << "New Contact added!\n";
}

void PhoneBook::get_from_input(string prommt, void (Contact::*set_value)(string), Contact& cont)
{
	std::string	input;
	int	i;

	cout << prommt;
	while (42)
	{
		getline(cin, input);
		for (i = 0; input[i] == ' ' || input[i] == '\t';)
			i++;
		if (!input.empty() && input[i])
			break ;
		cout << prommt << "can not be emtpy. Try again.\n" << prommt;
		cin.clear();
	}
	(cont.*set_value)(input);
}

void PhoneBook::search_contact(void) const
{
	std::string	input;
	int	i;

	print_contacts();
	while (42)
	{
		cout << "Give me ID: ";
		getline(cin, input);
		i = 0;
		while (!input.empty() && std::isdigit(input[i]))
			i++;
		if (input.empty() || input[i] != '\0' || std::stoi(input) >= this->phone_size)
		{
			cin.clear();
			cout << "Invalid ID, try again." << input << std::endl;
			continue;
		}
		print_single_contact(std::stoi(input));
		break;
	}
}

void PhoneBook::print_contacts(void) const
{
	if (this->phone_size < 1)
	{
		cout << "Nothing to desplay\n";
		return ;
	}
	cout << "\n|     Index|First Name| Last Name|  Nickname|\n";
	for (int i = 0; i < phone_size; i++)
	{
		cout 	<< "|" << "         " << i
				<< "|" << get_formated_output(contacts[i].getFirstname())
				<< "|" << get_formated_output(contacts[i].getLastname())
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
	cout	<< "-------------------- INFO	------------------------\n"
			<< "Firstname: " << contacts[index].getFirstname() << "\n"
			<< "Lastname: " << contacts[index].getLastname() << "\n"
			<< "Nickname: " << contacts[index].getNickname() << "\n"
			<< "Phone number: " << contacts[index].getPhonenumber() << "\n"
			<< "Darkest secret: " << contacts[index].getSecret() << "\n";

}
