/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:19:08 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 14:04:33 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("defaultName", "defaultTarget", 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(const std::string name, const std::string target)
	: AForm(name, target, 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm(other){}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	AForm::execute(executor);
	std::cout << "Trrr\nTr\n..Trrrrr\n";
	std::random_device rd;
	std::mt19937 gen(rd());
	std::bernoulli_distribution d(0.5);
	if (d(gen))
		std::cout << this->getTarget() << " has been robotomized successfully.\n";
	else
		std::cout << "The robotomy failed\n";
}
