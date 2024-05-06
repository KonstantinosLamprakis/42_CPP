/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 07:09:19 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/06 15:45:04 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "header.hpp"

class Contact
{
	private:
		string firstname;
		string lastname;
		string nickname;
		string phonenumber;
		string secret;

	public:
		// Contact();
		// Contact(const Contact &other);
		// ~Contact();
		// Contact& operator=(const Contact& other);

		void setFirstname(string str);
		void setLastname(string str);
		void setNickname(string str);
		void setPhonenumber(string str);
		void setSecret(string str);

		const string&	getFirstname(void) const;
		const string&	getLastname(void) const;
		const string&	getNickname(void) const;
		const string&	getPhonenumber(void) const;
		const string&	getSecret(void) const;
};

#endif
