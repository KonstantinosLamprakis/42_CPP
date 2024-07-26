/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:12:58 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 12:40:03 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructors

AForm::AForm() : _name("defaultName"), _target("defaultTarget"), _signed_grade(150), _exec_grade(150), _is_signed(false){
	std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(const std::string name, const std::string target, const int singed_grade, const int exec_grade) : _name(name), _target(target), _signed_grade(singed_grade), _exec_grade(exec_grade), _is_signed(false){
	std::cout << "Parametric constructor called" << std::endl;
	if (singed_grade > 150 || exec_grade > 150)
		throw (GradeTooLowException());
	if (singed_grade < 0 || exec_grade < 0)
		throw (GradeTooHighException());
}

AForm::AForm(const AForm &other) : _name(other._name), _target(other._target), _signed_grade(other._signed_grade), _exec_grade(other._exec_grade), _is_signed(other._is_signed){
	std::cout << "Copy constructor called" << std::endl;
}

AForm::~AForm (){
	std::cout << "Destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other){
		_is_signed = other._is_signed;
	}
	return (*this);
}

// Exceptions
const char *AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

// Getters
bool AForm::isSigned() const{
	return (_is_signed);
}

std::string AForm::getName() const{
	return (_name);
}

std::string AForm::getTarget() const{
	return (_target);
}

int AForm::getSignedGrade() const{
	return (_signed_grade);
}

int AForm::getExecGrade() const{
	return (_exec_grade);
}

// other
void AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->getSignedGrade())
		this->_is_signed = 1;
	else
		throw (GradeTooLowException());
}

// overload << operator
std::ostream &operator<<(std::ostream &os, const AForm &f){
	os << "AForm " << f.getName() << "\tSigned grade: " << f.getSignedGrade() << "\tExecution grade: " << f.getExecGrade() << "\tSigned: " << f.isSigned();
	return (os);
}
