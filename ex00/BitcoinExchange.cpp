/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 17:00:55 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/09 17:00:58 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
    getData("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other){
    dataMap = other.dataMap;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
    if (this == &other)
        return (*this);
    dataMap.clear();
    dataMap = other.dataMap;
    return (*this);
}

BitcoinExchange::~BitcoinExchange(){
    dataMap.clear();
}


void BitcoinExchange::getData(const std::string &file_name){
    std::ifstream file(file_name);
    std::string line;

    if (file.is_open()) {
        std::getline(file, line); // skip header
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string date;
            std::string nbr;

            std::getline(ss, date, ',');
            std::getline(ss, nbr, ',');
            dataMap[trim(date)] = std::stof(trim(nbr));        
        }
        file.close();
    } else {
        std::cerr << "Error: unable to open DB file\n";
    }
    for (std::map<std::string, float>::iterator it = dataMap.begin(); it != dataMap.end(); ++it) {
        std::cout << "Key: " << it->first << ": " << it->second << std::endl;
    }
}

void  BitcoinExchange::printValue(const std::string &date, const float &count) const{
    std::string result = getClosestDateBefore(dataMap, date);
    if (result == "NULL")
        std::cout << "Not valid date prior to " << date << std::endl;
    std::cout << date << " => " << count << " = " << dataMap.find(result)->second * count << std::endl;
}

void BitcoinExchange::proccessData(const std::string &file_name) const{
    std::ifstream file(file_name);
    std::string line;
    std::regex pattern_date("^[0-9]{4}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])$");
    std::regex pattern_float("^(?:1000(?:\\.0*)?|(?:[0-9]|[1-9][0-9]|[1-9][0-9]{2})(?:\\.[0-9]*)?)$");

    if (file.is_open()) {
        std::getline(file, line); // skip header
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string date;
            std::string count;

            std::getline(ss, date, '|');
            std::getline(ss, count, '|');
            date = trim(date);
            count = trim(count);
            if (!std::regex_match(date, pattern_date)) {
                std::cerr << "Error: not valid date : " << date << std::endl;
                continue ;
            }
            if (!std::regex_match(count, pattern_float)) {
                std::cerr << "Error: not valid float : " << count << std::endl;
                continue ;
            }
            printValue(date, std::stof(count));
        }
        file.close();
    } else {
        std::cerr << "Error: unable to open DB file\n";
    }
}

std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(' ');
    if (first == std::string::npos) {
        return "";  // All spaces or empty string
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

std::tm stringToDate(const std::string &dateStr) {
    std::tm date = {};
    std::istringstream ss(dateStr);
    ss >> std::get_time(&date, "%Y-%m-%d");
    return date;
}

std::string dateToString(const std::tm &date) {
    std::ostringstream ss;
    ss << std::put_time(&date, "%Y-%m-%d");
    return ss.str();
}

std::string getClosestDateBefore(const std::map<std::string, float> &dataMap, const std::string &dateStr) {
    std::tm targetDate = stringToDate(dateStr);
    std::time_t targetTime = std::mktime(&targetDate);

    std::map<std::string, float>::const_iterator it = dataMap.lower_bound(dateStr);

    if (it != dataMap.end() && it->first == dateStr) {
        return it->first;
    }

    if (it == dataMap.begin()) {
        return ("NULL");
    }

    --it;

    std::tm closestDate = stringToDate(it->first);
    std::time_t closestTime = std::mktime(&closestDate);

    if (closestTime < targetTime) {
        return it->first;
    } else {
        return ("NULL");
    }
}