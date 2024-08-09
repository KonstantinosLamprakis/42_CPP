/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:00:44 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/09 17:01:00 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>

#include <regex>
#include <string>

#include <ctime>
#include <limits>
#include <iomanip>

#include <map>

class BitcoinExchange {
    private:
        std::map<std::string, float> dataMap;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

        void getData(const std::string &file_name);
        void printValue(const std::string &date, const float &count) const;
        void proccessData(const std::string &file_name) const;
};

std::string trim(const std::string& str);
std::string getClosestDateBefore(const std::map<std::string, float> &dataMap, const std::string &dateStr);
std::string dateToString(const std::tm &date);
std::tm stringToDate(const std::string &dateStr);