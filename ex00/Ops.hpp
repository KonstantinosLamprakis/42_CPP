/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ops.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:47:00 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 16:56:19 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T> T min(T &x, T &y){
	if (x < y)
		return (x);
	return (y);
}

template <typename T> T max(T &x, T &y){
	if (x > y)
		return (x);
	return (y);
}

