/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:15:58 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/24 12:52:23 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return *this;
	this->_grade = other.getGrade();
	std::cout << "= operator for " << this->getName() << " and grade " << this->getGrade() << "\n";
	return *this;
}

Bureaucrat::Bureaucrat(): _name("Konstantinos"), _grade(150){
	std::cout << "Default constructor for " << this->getName() << "\n";
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Destructor for " << this->getName() << "\n";
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name){
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
	std::cout << "Constructor for " << this->getName() << " and grade " << this->getGrade() << "\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other.getName()), _grade(other.getGrade()){
	std::cout << "Copy Constructor for " << this->getName() << " and grade " << this->getGrade() << "\n";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low.");
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &a)
{
	os << "name: " << a.getName() << "\tgrade: " << a.getGrade() << std::endl;
	return (os);
}
