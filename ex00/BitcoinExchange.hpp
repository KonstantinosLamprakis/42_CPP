
#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
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
        void printValue(const std::string &date, const std::string &count_str) const;
        void proccessData(const std::string &file_name) const;
};

std::string trim(const std::string& str);