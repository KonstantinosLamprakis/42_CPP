/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:12:32 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 12:32:05 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _description("Default Description"){
	std::cout << "Default constructor for Data\n";
}

Data::Data(const std::string &description): _description(description){
	std::cout << "Parameter constructor for Data\n";
}

Data::Data(const Data &other){
	std::cout << "Copy constructor for Data\n";
	this->_description = other.getDescription();
}

Data::~Data(){
	std::cout << "Destructor for Data\n";
}

Data &Data::operator=(const Data &other){
	std::cout << "Assigment operator for Data\n";
	if (this == &other)
		return (*this);
	this->_description = other.getDescription();
	return (*this);
}

std::string Data::getDescription() const{
	return (_description);
}

