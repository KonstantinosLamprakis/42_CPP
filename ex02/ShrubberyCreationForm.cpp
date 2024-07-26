/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:19:03 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 13:48:44 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("defaultName", "defaultTarget", 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const std::string target)
	: AForm(name, target, 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(const &ShrubberyCreationForm other)
	: AForm(other){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
	if (this == &other)
		return (*this);
	AForm::operator=(other);
	return (*this);
}

void execute(const Bureaucrat &executor) const{
	AForm::execute(executor);
	std::ofstream ofs(this->getTarget() + "_shrubbery");
	if (!ofs) {
		std::cerr << "Error: Could not create file " << this->getTarget() + "_shrubbery" << std::endl;
		return;
	}
	ofs << "		_-_\n";
	ofs << "	 /~~   ~~\\\n";
	ofs << "  /~~		 ~~\\\n";
	ofs << " {			   }\n";
	ofs << "  \\  _-	 -_  /\n";
	ofs << "	~  \\\\ //  ~\n";
	ofs << " _- -   | | _- _\n";
	ofs << "   _ -  | |   -_\n";
	ofs << "	   // \\\\";
	ofs.close();
	std::cout << "File " << this->getTarget() + "_shrubbery" << " created and ASCII trees written." << std::endl;
}
