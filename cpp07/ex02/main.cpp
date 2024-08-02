/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:05:44 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 18:04:16 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Array.hpp"

const int size = 100;

int main(void)
{
	Array<int> nbr_arr(size);
	for (int i = 0; i < size; i++){
		std::cout << nbr_arr[i] << " ";
		nbr_arr[i] = i;
	}
	std::cout << "\n";
	for (int i = 0; i < size; i++){
		std::cout << nbr_arr[i] << " ";
	}
	std::cout << "\n";

	Array<int> tmp;
	try{
		std::cout << "tmp[0]= " << tmp[0] << std::endl;
		std::cout << "tmp[1]= " << tmp[1] << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	Array<int> test(nbr_arr);
	try{
		for (int i = 0; i < size; i++)
			if (nbr_arr[i] != test[i])
				std::cerr << "Error: not a proper copy\n";
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "nbr_arr[0]: " << nbr_arr[1] << std::endl;
	std::cout << "test[0]: " << test[1] << std::endl;

	nbr_arr[1] = 1000;
	std::cout << "nbr_arr[0]: " << nbr_arr[1] << std::endl;
	std::cout << "test[0]: " << test[1] << std::endl;

	try{
		nbr_arr[-2] = 0;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		nbr_arr[size] = 0;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	return (0);
}
