/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:23:05 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 14:21:47 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base::~Base(){}

Base * generate(void){
	Base *result;
	static bool isFirstTime = 0;
	if (!isFirstTime)
	{
		std::srand(time(0));
		isFirstTime = 1;
	}
	float random = (float)rand() / (float)RAND_MAX;
	std::cout << "random: " << random << std::endl;
	if (random < 0.33){
		std::cout << "Created A\n";
		result = new A();
	}else if (random < 0.66){
		std::cout << "Created B\n";
		result = new B();
	}else{
		std::cout << "Created C\n";
		result = new C();
	}
	return (result);
}

void identify(Base* p){
	if (dynamic_cast<A*>(p)) {
		std::cout << "Type is A\n";
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "Type is B\n";
	} else {
		std::cout << "Type is C\n";
	}
}

int isThisClass(int classIndex, Base &p){
	try {
		switch (classIndex){
			case 1: {
				A& a = dynamic_cast<A&>(p);
				(Base) a;
				break;
			}
			case 2: {
				B& b = dynamic_cast<B&>(p);
				(Base) b;
				break;
			}
			default: {
				C& c = dynamic_cast<C&>(p);
				(Base) c;
			}
		}
	} catch (const std::bad_cast&) {
		return (0);
	}
	return (1);
}

void identify(Base& p){
	if (isThisClass(1, p))
		std::cout << "Type is A\n";
	if (isThisClass(2, p))
		std::cout << "Type is B\n";
	if (isThisClass(3, p))
		std::cout << "Type is C\n";
}
