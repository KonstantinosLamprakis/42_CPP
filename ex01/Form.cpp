/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:12:58 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 12:54:16 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors

Form::Form() : _name("defaultName"), _signed_grade(150), _exec_grade(150), _is_signed(false){
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(const std::string name, const int signed_grade, const int exec_grade) : _name(name), _signed_grade(signed_grade), _exec_grade(exec_grade), _is_signed(false){
	std::cout << "Parametric constructor called" << std::endl;
	if (signed_grade > 150 || exec_grade > 150)
		throw (GradeTooLowException());
	if (signed_grade < 0 || exec_grade < 0)
		throw (GradeTooHighException());
}

Form::Form(const Form &other) : _name(other._name), _signed_grade(other._signed_grade), _exec_grade(other._exec_grade), _is_signed(other._is_signed){
	std::cout << "Copy constructor called" << std::endl;
}

Form::~Form (){
	std::cout << "Destructor called" << std::endl;
}

Form &Form::operator=(const Form &other){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other){
		_is_signed = other._is_signed;
	}
	return (*this);
}

// Exceptions
const char *Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

// Getters
bool Form::isSigned() const{
	return (_is_signed);
}

std::string Form::getName() const{
	return (_name);
}

int Form::getSignedGrade() const{
	return (_signed_grade);
}

int Form::getExecGrade() const{
	return (_exec_grade);
}

// other
void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->getSignedGrade())
		this->_is_signed = 1;
	else
		throw (GradeTooLowException());
}

// overload << operator
std::ostream &operator<<(std::ostream &os, const Form &f){
	os << "Form " << f.getName() << "\tSigned grade: " << f.getSignedGrade() << "\tExecution grade: " << f.getExecGrade() << "\tSigned: " << f.isSigned();
	return (os);
}
