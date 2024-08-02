/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:33:53 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/29 15:18:29 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	std::cout << "Default constructor\n";
}

ScalarConverter::ScalarConverter(const ScalarConverter &other){
	(void) other;
	std::cout << "Copy constructor\n";
}

ScalarConverter::~ScalarConverter(){
	std::cout << "Default distructor\n";
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
	std::cout << "Copy operator\n";
	if (this == &other)
		return (*this);
	return (*this);
}

void ScalarConverter::convert(const std::string& str) {
	double value;
	std::string literal = str;

	try {
		if (isPseudoLiteral(literal)) {
			if (literal == "nan" || literal == "nanf") {
				value = std::numeric_limits<double>::quiet_NaN();
			} else if (literal[0] == '+') {
				value = std::numeric_limits<double>::infinity();
			} else {
				value = -std::numeric_limits<double>::infinity();
			}
		} else if (literal.length() == 1 && !isdigit(literal[0])) {
			value = static_cast<double>(literal[0]);
		} else {
			if (literal[literal.length() - 1] == 'f')
				literal.erase(literal.length() - 1, 1);
			value = stringToDouble(literal);
		}

		convertToChar(value);
		convertToInt(value);
		convertToFloat(value);
		convertToDouble(value);
	} catch (const std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

bool ScalarConverter::isPseudoLiteral(const std::string& literal) {
	return (literal == "nan" || literal == "nanf" || literal == "+inf" || literal == "-inf" ||
			literal == "+inff" || literal == "-inff");
}

double ScalarConverter::stringToDouble(const std::string& literal) {
	char* end;
	errno = 0;
	double value = std::strtod(literal.c_str(), &end);
	if (errno != 0 || *end != '\0') {
		throw std::invalid_argument("Invalid input");
	}
	return value;
}

void ScalarConverter::convertToChar(double value) {
	if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max()) {
		std::cout << "char: impossible" << std::endl;
	} else {
		char c = static_cast<char>(value);
		if (isprint(c)) {
			std::cout << "char: '" << c << "'" << std::endl;
		} else {
			std::cout << "char: Non displayable" << std::endl;
		}
	}
}

void ScalarConverter::convertToInt(double value) {
	if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max()) {
		std::cout << "int: impossible" << std::endl;
	} else {
		int i = static_cast<int>(value);
		std::cout << "int: " << i << std::endl;
	}
}

void ScalarConverter::convertToFloat(double value) {
	if (std::isnan(value)) {
		std::cout << "float: nanf" << std::endl;
	} else if (std::isinf(value)) {
		std::cout << "float: " << (value > 0 ? "+inff" : "-inff") << std::endl;
	} else if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max()) {
		std::cout << "float: impossible" << std::endl;
	} else {
		float f = static_cast<float>(value);
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << 'f' << std::endl;
	}
}

void ScalarConverter::convertToDouble(double value) {
	if (std::isnan(value)) {
		std::cout << "double: nan" << std::endl;
	} else if (std::isinf(value)) {
		std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
	} else {
		std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
	}
}
