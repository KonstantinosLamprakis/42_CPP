/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:12:33 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 12:40:16 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout << "Default constructor Serializer\n";
}

Serializer::Serializer(const Serializer &other){
	(void) other;
	std::cout << "Copy constructor Serializer\n";
}

Serializer::~Serializer(){
	std::cout << "Destructor Serializer\n";
}

Serializer &Serializer::operator=(const Serializer &other){
	(void) other;
	std::cout << "Assigment operator Serializer\n";
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data*>(raw);
}


