/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:56:51 by klamprak          #+#    #+#             */
/*   Updated: 2024/05/07 14:33:01 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl_obj;
	harl_obj.complain("DEBUG");
	harl_obj.complain("INFO");
	harl_obj.complain("WARNING");
	harl_obj.complain("ERROR");
	harl_obj.complain("NOTFOUND");
}
