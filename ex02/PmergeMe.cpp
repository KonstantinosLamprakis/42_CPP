/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:58:51 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/10 19:16:58 by klamprak         ###   ########.fr       */
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
    size_t chunkSize = 2; // Define chunk size for insertion sort

    std::cout << "Original list: ";
    for (std::list<int>::iterator it = dataList.begin(); it != dataList.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    fordJohnsonSort(dataList, chunkSize);

    std::cout << "Sorted list: ";
    for (std::list<int>::iterator it = dataList.begin(); it != dataList.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
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

// Insertion sort for std::list
void insertionSortList(std::list<int> &lst) {
    if (lst.size() <= 1) 
        return;
    for (std::list<int>::iterator it1 = std::next(lst.begin()); it1 != lst.end(); ++it1) {
        int value = *it1;
        std::list<int>::iterator it2 = it1;
        while (it2 != lst.begin() && *std::prev(it2) > value) {
            *it2 = *std::prev(it2);
            --it2;
        }
        *it2 = value;
    }
}

// Merge two sorted lists
std::list<int> mergeLists(const std::list<int> &l1, const std::list<int> &l2) {
    std::list<int> merged;
    std::list<int>::const_iterator it1 = l1.begin();
    std::list<int>::const_iterator it2 = l2.begin();

    while (it1 != l1.end() && it2 != l2.end()) {
        if (*it1 < *it2) {
            merged.push_back(*it1++);
        } else {
            merged.push_back(*it2++);
        }
    }

    while (it1 != l1.end()) {
        merged.push_back(*it1++);
    }

    while (it2 != l2.end()) {
        merged.push_back(*it2++);
    }

    return merged;
}

// Ford-Johnson Merge-Insertion Sort
void fordJohnsonSort(std::list<int> &lst, size_t chunkSize) {
    if (lst.size() <= chunkSize) {
        insertionSortList(lst);
        return;
    }

    // Divide the list into chunks
    std::list<std::list<int> > chunks;
    std::list<int>::iterator it = lst.begin();
    while (it != lst.end()) {
        std::list<int> chunk;
        for (size_t i = 0; i < chunkSize && it != lst.end(); ++i) {
            chunk.push_back(*it++);
        }
        insertionSortList(chunk); // Sort each chunk
        chunks.push_back(chunk);
    }

    // Merge sorted chunks
    while (chunks.size() > 1) {
        std::list<std::list<int> > mergedChunks;
        std::list<std::list<int> >::iterator it1 = chunks.begin();
        std::list<std::list<int> >::iterator it2 = std::next(it1);

        while (it2 != chunks.end()) {
            mergedChunks.push_back(mergeLists(*it1, *it2));
            it1 = std::next(it2);
            if (it1 == chunks.end())
                break;
            it2 = std::next(it1);
        }

        // If there is an odd number of chunks, add the last chunk as is
        if (it1 != chunks.end()) {
            mergedChunks.push_back(*it1);
        }
        chunks = mergedChunks;
    }
    lst = chunks.front();
}