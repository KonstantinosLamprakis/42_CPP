/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:30:05 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/29 14:58:41 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cerrno>
#include <cmath>
#include <iomanip>

class ScalarConverter {
	private:
		ScalarConverter();
		static void convertToChar(double value);
		static void convertToInt(double value);
		static void convertToFloat(double value);
		static void convertToDouble(double value);
		static bool isPseudoLiteral(const std::string& literal);
		static double stringToDouble(const std::string& literal);

	public:
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
		static void convert(const std::string& literal);
};
