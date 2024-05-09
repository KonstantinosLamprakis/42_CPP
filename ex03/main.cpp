/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:35:05 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/09 08:07:42 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

int main(void)
{
	if (bsp(Point(10, 0), Point(5, 5), Point(0, 20), Point(10, 10)))
		return (cout << "Inside triangle\n", 0);
	return (cout << "Outside triangle\n", 0);
}
