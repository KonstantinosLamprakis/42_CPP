/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:01:03 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/09 17:01:06 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cerr << "Error: You should provide 1 argument.\n";
        return (1);
    }
    BitcoinExchange btc;
    btc.proccessData(argv[1]);
}