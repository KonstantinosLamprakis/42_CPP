/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:57:46 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 17:04:16 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// Function to be used with iter
template <typename T>
void printElement(const T& element) {
	std::cout << element << " ";
}

template <typename T>
void incrementElement(T& element) {
	++element;
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	std::cout << "Original intArray: ";
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	std::cout << "Incremented intArray: ";
	iter(intArray, 5, incrementElement<int>);
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	std::cout << "Original doubleArray: ";
	iter(doubleArray, 5, printElement<double>);
	std::cout << std::endl;

	std::cout << "Incremented doubleArray: ";
	iter(doubleArray, 5, incrementElement<double>);
	iter(doubleArray, 5, printElement<double>);
	std::cout << std::endl;

	return 0;
}
