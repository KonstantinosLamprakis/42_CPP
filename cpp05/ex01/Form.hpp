/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:13:03 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 12:54:16 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Bureaucrat;

class Form{
	private:
		const std::string _name;
		const int _signed_grade;
		const int _exec_grade;
		bool _is_signed;

	public:
		// constructors
		Form();
		Form(const std::string name, const int signed_grade, const int exec_grade);
		Form(const Form &other);
		~Form();
		Form &operator=(const Form &other);

		// exceptions
		class GradeTooHighException : public std::exception{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception{
			const char *what() const throw();
		};

		// Getters
		bool isSigned() const;
		std::string getName() const;
		int getSignedGrade() const;
		int getExecGrade() const;

		// other
		void beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &os, const Form &f);
