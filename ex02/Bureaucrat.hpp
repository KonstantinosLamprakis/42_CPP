/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:17:46 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/26 12:35:36 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(const std::string name, const int grade);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &src);

		void incrementGrade(void);
		void decrementGrade(void);

		const std::string &getName(void) const;
		int getGrade(void) const;
		void signForm(AForm &form) const;
		void executeForm(AForm const &form);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &a);
