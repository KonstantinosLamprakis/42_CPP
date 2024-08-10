/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:14:09 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/10 16:15:02 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &other){
    dataStack = other.dataStack;
}

RPN &RPN::operator=(const RPN &other){
    if (this == &other)
        return (*this);
    while (!dataStack.empty())
        dataStack.pop();  
    dataStack = other.dataStack;
    return (*this);
}

RPN::~RPN(){
    while (!dataStack.empty())
        dataStack.pop();  
}

void RPN::proccessData(const std::string &data){
    int result = 0;
    int is_error = 0;
    // input check
    std::regex rpn_pattern("(^\\s*(\\d|\\d\\s+[\\+\\-\\*\\/])(\\s+\\d|\\s+[\\+\\-\\*\\/]|\\s+\\d\\s+[\\+\\-\\*\\/])*\\s*$)");
    if (!std::regex_match(data, rpn_pattern)) {
        std::cerr << "Error: not right format.\n";
        return ;
    }
    for(int i = 0; data[i] != '\0'; i++){
        if (data[i] == ' ')
            continue ;
        if (!strchr("+-/*", data[i])){
            dataStack.push(data[i] - '0');
            continue;
        }
        if (dataStack.size() < 2)
        {
            is_error = 1;
            break ;
        }
        int a = dataStack.top();
        dataStack.pop();
        int b = dataStack.top();
        dataStack.pop();
        switch (data[i]){
            case '+':
                result = b + a;
                break;
            case '-':
                result = b - a;
                break;
            case '*':
                result = b * a;
                break;
            case '/':
                result = b / a;
                break;
        }
        dataStack.push(result);
    }
    if (is_error)
        std::cerr << "Error: not a valid equation.\n";
    else
        std::cout << result << std::endl;
    // clean stack
    while (!dataStack.empty())
        dataStack.pop(); 
}

std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos) {
        return "";  // All spaces or empty string
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}