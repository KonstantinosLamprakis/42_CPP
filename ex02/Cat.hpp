/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 09:13:29 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/10 10:22:44 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &original);
		~Cat();
		Cat &operator=(const Cat &original);
		void makeSound() const;
};
#endif
