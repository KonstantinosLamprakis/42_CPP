/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 07:05:42 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/06 14:37:08 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstname(string str)
{
	this->firstname = str;
}

void Contact::setLastname(string str)
{
	this->lastname = str;
}

void Contact::setNickname(string str)
{
	this->nickname = str;
}

void Contact::setPhonenumber(string str)
{
	this->phonenumber = str;
}

void Contact::setSecret(string str)
{
	this->secret = str;
}

const string&	Contact::getFirstname(void) const
{
	return this->firstname;
}

const string&	Contact::getLastname(void) const
{
	return this->lastname;
}

const string&	Contact::getNickname(void) const
{
	return this->nickname;
}

const string&	Contact::getPhonenumber(void) const
{
	return this->phonenumber;
}

const string&	Contact::getSecret(void) const
{
	return this->secret;
}
