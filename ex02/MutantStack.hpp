/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:45:17 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/01 15:07:00 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack(): std::stack<T>() {}
		MutantStack(MutantStack const &other) : std::stack<T>(other) {}
		~MutantStack() {}
		MutantStack &operator=(MutantStack const &other){
			if (this == &other)
				return (*this);
			std::stack<T>::operator=(other);
			return (*this);
		}

		iterator begin(){
			return (std::stack<T>::c.begin());
		}

		iterator end(){
			return (std::stack<T>::c.end());
		}
};
