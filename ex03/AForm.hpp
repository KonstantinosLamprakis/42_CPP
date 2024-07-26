/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:13:03 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 15:39:30 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <random>

class Bureaucrat;

class AForm{
	private:
		const std::string _name;
		const std::string _target;
		const int _signed_grade;
		const int _exec_grade;
		bool _is_signed;

	public:
		// constructors
		AForm();
		AForm(const std::string name, const std::string target, const int signed_grade, const int exec_grade);
		AForm(const AForm &other);
		virtual ~AForm();
		AForm &operator=(const AForm &other);

		// exceptions
		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception{
			const char *what() const throw();
		};

		class FormNotSignedException : public std::exception{
			const char *what() const throw();
		};

		// Getters
		bool isSigned() const;
		std::string getName() const;
		std::string getTarget() const;
		int getSignedGrade() const;
		int getExecGrade() const;

		// other
		void beSigned(const Bureaucrat &b);
		virtual void execute(const Bureaucrat &executor) const;
};

std::ostream &operator<<(std::ostream &os, const AForm &f);
