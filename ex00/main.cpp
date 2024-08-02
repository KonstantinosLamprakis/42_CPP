/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:13:17 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/01 13:36:41 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	try {
		std::vector<int> vec;
		for (int i = 1; i < 6; i++)
			vec.push_back(i);
		std::vector<int>::iterator it = easyfind(vec, 3);
		std::cout << "Found in vector: " << *it << std::endl;

		it = easyfind(vec, 10);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		std::list<int> lst;
		for (int i = 10; i < 60; i += 10)
			lst.push_back(i);
		std::list<int>::iterator it = easyfind(lst, 30);
		std::cout << "Found in list: " << *it << std::endl;

		it = easyfind(lst, 100);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
