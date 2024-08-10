/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:14:06 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/10 15:58:38 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <stack>

#include <regex>
#include <string>
#include <cstring>

class RPN {
    private:
        std::stack<int> dataStack;

    public:
        RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        ~RPN();

        void proccessData(const std::string &data);
};

std::string trim(const std::string& str);