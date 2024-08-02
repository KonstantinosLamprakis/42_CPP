/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:38:21 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/01 14:36:44 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
		unsigned int _maxSize;
		std::vector<int> _vec;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		~Span();
		Span &operator=(const Span &other);

		void addNumber(const int &nbr);
		int shortestSpan() const;
		int longestSpan() const;
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class NotEnoughElementsException : public std::exception{
			const char *what() const throw();
		};

		class MaxSizeOverflowException : public std::exception{
			const char *what() const throw();
		};
};
