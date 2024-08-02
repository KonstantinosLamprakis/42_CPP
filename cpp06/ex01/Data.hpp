/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:12:34 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 12:25:40 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdint>

class Data{
	private:
		std::string _description;

	public:
		Data();
		Data(const std::string &description);
		Data(const Data &other);
		~Data();
		Data &operator=(const Data &other);

		std::string getDescription() const;
};
