
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

void  BitcoinExchange::printValue(const std::string &date, const std::string &count_str) const{
    std::cout << "=" << date << "=" << count_str << "=\n";
}

void BitcoinExchange::proccessData(const std::string &file_name) const{
    std::ifstream file(file_name);
    std::string line;

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
            printValue(date, count);
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