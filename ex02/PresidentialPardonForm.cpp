/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:19:13 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 13:57:04 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("defaultName", "defaultTarget", 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm(const std::string name, const std::string target)
	: AForm(name, target, 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: AForm(other) {}
PresidentialPardonForm::~PresidentialPardonForm() {}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	AForm::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
}
