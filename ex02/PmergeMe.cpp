/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:58:51 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/10 19:03:41 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &other){
    dataDeq = other.dataDeq;
    dataList = other.dataList;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other){
    if (this == &other)
        return (*this);
    dataDeq.clear();
    dataList.clear();
    dataDeq = other.dataDeq;
    dataList = other.dataList;
    return (*this);
}

PmergeMe::~PmergeMe(){
    dataDeq.clear();
    dataList.clear();
}

int PmergeMe::validateInput(char **nbrs_str){
    int is_valid = 1;
    std::regex nbr_pattern("^\\d+$");
    int i = -1;
    while(nbrs_str[++i]){
        nbrs_str[i] += nbrs_str[i][0] == '+';
        if (!std::regex_match(nbrs_str[i], nbr_pattern)) {
            std::cerr << "Error: only positive number allowed.\n";
            is_valid = 0;
            break;
        }
        if (std::strlen(nbrs_str[i]) > 10) {
            std::cerr << "Error: number too big.\n";
            is_valid = 0;
            break;
        }
        long int tmp = std::stol(nbrs_str[i]);
        if (tmp > 2147483647){
            std::cerr << "Error: number too big.\n";
            is_valid = 0;
            break;
        }
        dataDeq.push_back((int)tmp);
        dataList.push_back((int)tmp);
    }
    if (is_valid && (hasDuplicates(dataList) || hasDuplicates(dataList))){
        is_valid = 0;
        std::cerr << "Error: shouldn't be duplicate numbers.\n";
    }
    if (!is_valid)
    {
        dataDeq.clear();
        dataList.clear();
        return (0);
    }   
    return (1);
}

void PmergeMe::sort(char **nbrs_str){
    if (!validateInput(nbrs_str))
        return ;
    // sortDeque();
    // sortList();
    // size_t chunkSize = 2; // Define chunk size for insertion sort

    std::cout << "Original list: ";
    for (std::list<int>::iterator it = std::next(dataList.begin()); it != dataList.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Original list: ";
    for (std::deque<int>::iterator it = std::next(dataDeq.begin()); it != dataDeq.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // fordJohnsonSort(dataList, chunkSize);

    // std::cout << "Sorted list: ";
    // for (std::list<int>::iterator it = std::next(dataList.begin()); it != dataList.end(); it++){
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;
}

void PmergeMe::sortDeque(){

}

void PmergeMe::sortList(){

}

template <typename Container>
bool hasDuplicates(const Container &container) {
    std::set<typename Container::value_type> seen;
    for (typename Container::const_iterator it = container.begin(); it != container.end(); it++){
        if (seen.find(*it) != seen.end())
            return true;
        seen.insert(*it);
    }
    return false;
}
