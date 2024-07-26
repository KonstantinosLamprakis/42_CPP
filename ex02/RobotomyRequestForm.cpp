/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:19:08 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 13:45:56 by klamprak         ###   ########.fr       */
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

void execute(const Bureaucrat &executor) const{
	std::cout << "Trrr\nTr\n..Trrrrr"
	try{
		AForm::execute(executor);
		std::cout << this->getTarget() << " has been robotomized successfully 50%% of the time.\n";
	}catch (std::exception &e){
		std::cout << "The robotomy failed: " << e.what() << std::endl;
	}
}
