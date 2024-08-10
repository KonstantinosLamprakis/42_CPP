/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:58:46 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/10 18:17:58 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv){
    if (argc < 2){
        std::cerr << "Error: You should provide at least 1 argument.\n";
        return (1);
    }
    PmergeMe PmergeMe;
    PmergeMe.sort(argv + 1);
}