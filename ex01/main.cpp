/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:13:30 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 11:33:11 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Form f1;
	std::cout << "Default form:\n" << f1 << std::endl;

	std::cout << "Should get 2 errors:\n" << std::endl;
	try{
		Form f2("Form1", -1, 12);
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try{
		Form f3("Form1", 12, 151);
	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	Form f4("Form1", 12, 130);
	std::cout << "Normal form:\n" << f4 << std::endl;

	Bureaucrat b1("Bureaucrat1", 140);
	std::cout << "Normal Bureaucrat:\n" << b1 << std::endl;
	std::cout << "Should get failure on signing:\n" << std::endl;
	b1.signFrom(f4);

	Bureaucrat b2("Bureaucrat2", 1);
	std::cout << "Normal Bureaucrat:\n" << b2 << std::endl;
	std::cout << "Should get success on signing:\n" << std::endl;
	b2.signFrom(f4);

	// try{
	// }catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }
}
