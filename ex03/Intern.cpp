/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:41:03 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 15:41:20 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

typedef std::function<AForm*()> FactoryFunction;

Intern::Intern() {}
Intern::Intern(const Intern &other) {
	(void) other;
}

Intern::~Intern() {}
Intern &Intern::operator=(const Intern &other) {
	(void) other;
	return (*this);
}

AForm *createShrubbery(const std::string &name, const std::string &target) {
	return new ShrubberyCreationForm(name, target);
}

AForm *createRobotomy(const std::string &name, const std::string &target) {
	return new RobotomyRequestForm(name, target);
}

AForm *createPresidentialPardon(const std::string &name, const std::string &target) {
	return new PresidentialPardonForm(name, target);
}

AForm *Intern::makeForm(const std::string &name, const std::string &target) const{
	const int len = 3;
	std::string namesArr[] = {"shrubbery request", "robotomy request", "presidentialPardon request"};
	AForm *(*formsArr[])(const std::string &name, const std::string &target) = { createShrubbery, createRobotomy, createPresidentialPardon };
	// FactoryFunction formsArr[] = { createShrubbery, createRobotomy, createPresidentialPardon };

	if (target.empty() || name.empty())
	{
		std::cerr << "Name and Target shouldnt be emty\n";
		return (NULL);
	}
	for (int i = 0; i < len; i++){
		if (name == namesArr[i])
			return (formsArr[i](name, target));
	}
	std::cerr << "Wrong name: " << name << "\nTry:\n\tshrubbery request\n\trobotomy request\n\tpresidentialPardon request\n";
	return (NULL);
}
