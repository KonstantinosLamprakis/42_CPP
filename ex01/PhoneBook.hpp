/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 07:09:28 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/06 15:54:12 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "header.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		phone_size;

public:
	// PhoneBook();
	// PhoneBook(const PhoneBook &other);
	// ~PhoneBook();
	// PhoneBook& operator=(const PhoneBook& other);

	void add_contact(Contact new_con);
	void search_contact(void) const;
	void print_contacts(void) const;
	static string get_formated_output(string str);
	void print_single_contact(int index)const;
};

#endif
