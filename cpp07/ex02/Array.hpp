/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:05:40 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 18:03:33 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T>

class Array{
	private:
		unsigned int _size;
		T *_arr;

	public:
		Array(): _size(0), _arr(NULL) {}

		Array(unsigned int size): _size(size) {
			_arr = new T[size];
		}

		Array(const Array &other): _size(other._size){
			_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++){
				_arr[i] = other._arr[i];
			}
		}

		~Array(){
			delete [] _arr;
		}

		Array &operator=(const Array &other){
			if (this == &other)
				return (*this);
			_size = other._size;
			_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++){
				_arr[i] = other._arr[i];
			}
		}

		unsigned int size() const{
			return (_size);
		}

		T &operator[](const unsigned int &index){
			if (index < 0 || index >= _size)
				throw (indexOutOfRangeException());
			return (_arr[index]);
		}

		class indexOutOfRangeException : public std::exception{
			const char *what() const throw(){
				return ("Index out of range");
			}
		};
};
