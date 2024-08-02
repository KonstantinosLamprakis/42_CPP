/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:55:51 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/29 15:16:26 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Error: Args should be exactly 1\n";
		return (1);
	}
	ScalarConverter::convert(argv[1]);
}
