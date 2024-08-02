/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:38:23 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/01 14:38:20 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _maxSize(10){}

Span::Span(unsigned int N): _maxSize(N){}

Span::Span(const Span &other): _maxSize(other._maxSize){
	_vec = other._vec;
}

Span::~Span(){
	_vec.clear();
}

Span &Span::operator=(const Span &other){
	if (this == &other)
		return (*this);
	_maxSize = other._maxSize;
	_vec = other._vec;
	return (*this);
}


void Span::addNumber(const int &nbr){
	if (_vec.size() == _maxSize)
		throw (MaxSizeOverflowException());
	_vec.push_back(nbr);
}

int Span::shortestSpan() const{
	int shortSpan = std::numeric_limits<int>::max();
	if (_vec.size() < 2)
		throw (NotEnoughElementsException());
	for (size_t i = 0; i < _vec.size() - 1; i++){
		for (size_t j = i + 1; j < _vec.size(); j++){
			if (std::abs(_vec[j] - _vec[i]) < shortSpan)
				shortSpan = std::abs(_vec[j] - _vec[i]);
		}
	}
	return (shortSpan);
}

int Span::longestSpan() const{
	if (_vec.size() < 2)
		throw (NotEnoughElementsException());
	int minValue = *(std::min_element(_vec.begin(), _vec.end()));
	int maxValue = *(std::max_element(_vec.begin(), _vec.end()));
	return (maxValue - minValue);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->_vec.size() + std::distance(begin, end) > _maxSize)
		throw (MaxSizeOverflowException());
	this->_vec.insert(this->_vec.end(), begin, end);
}


const char *Span::NotEnoughElementsException::what() const throw(){
	return ("The container doesn't contain enough elements.");
}


const char *Span::MaxSizeOverflowException::what() const throw(){
	return ("You tried to exceed to max size. This is not possible.");
}

