/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:40:57 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 15:57:17 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();
		Intern &operator=(const Intern &other);

		AForm *makeForm(const std::string &name, const std::string &target) const;
};

AForm *createShrubbery(const std::string &name, const std::string &target);
AForm *createRobotomy(const std::string &name, const std::string &target);
AForm *createPresidentialPardon(const std::string &name, const std::string &target);
