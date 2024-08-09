
#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cerr << "Error: You should provide 1 argument.\n";
        return (1);
    }
    BitcoinExchange btc;
    btc.proccessData(argv[1]);
}