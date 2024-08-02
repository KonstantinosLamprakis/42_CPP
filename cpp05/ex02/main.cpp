/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:13:30 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 14:10:53 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "\n------ Test success cases ------\n";
	ShrubberyCreationForm s1("Shrubbery1", "ShTarget1");
	std::cout << s1 << std::endl;
	RobotomyRequestForm r1("Robotomy1", "RobTarget1");
	std::cout << r1 << std::endl;
	PresidentialPardonForm p1("Presidential1", "PreTarget1");
	std::cout << p1 << std::endl;
	Bureaucrat b1("Bureaucrat1", 5);
	std::cout << b1 << std::endl;
	b1.signForm(s1);
	b1.signForm(r1);
	b1.signForm(p1);
	b1.executeForm(s1);
	b1.executeForm(p1);
	b1.executeForm(r1);
	std::cout << "\n------ Test error cases ------\n";
	Bureaucrat b2("Bureaucrat1", 150);
	std::cout << b2 << std::endl;
	b1.signForm(s1);
	b2.executeForm(s1);
	b2.executeForm(p1);
	b2.executeForm(r1);
	std::cout << "\n------ Destructors ------\n";
}
