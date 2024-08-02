/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:57:49 by klamprak          #+#    #+#             */
/*   Updated: 2024/07/30 17:04:25 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T, typename F> void iter(T *arr, size_t len, F func){
	for (size_t i = 0; i < len; i++){
		func(arr[i]);
	}
}
