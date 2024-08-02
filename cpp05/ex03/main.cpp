/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:13:30 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 15:43:07 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern i1;
	AForm *f1;

	std::cout << "\n------ Test Success ------\n";
	f1 = i1.makeForm("shrubbery request", "testFile");
	std::cout << *f1 << std::endl;
	delete f1;
	f1 = i1.makeForm("robotomy request", "testFile");
	std::cout << *f1 << std::endl;
	delete f1;
	f1 = i1.makeForm("presidentialPardon request", "testFile");
	std::cout << *f1 << std::endl;
	delete f1;

	std::cout << "\n------ Test Errors ------\n";
	f1 = i1.makeForm("", "");
	f1 = i1.makeForm("test", "test");
	std::cout << "\n------ Destructors ------\n";
}
