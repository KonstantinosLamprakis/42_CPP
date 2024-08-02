/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:12:35 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 12:31:04 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void){
	Data d("My Data 1");
	Data *ptr = &d;
	uintptr_t raw = Serializer::serialize(ptr);
	Data *ptr2 = Serializer::deserialize(raw);
	std::cout << ((ptr2 == ptr) ? "Same pointer :)\n" : "Not same pointer :(\n");
}
