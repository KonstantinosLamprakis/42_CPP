/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamprak <klamprak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:58:54 by klamprak          #+#    #+#             */
/*   Updated: 2024/08/10 19:59:46 by klamprak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <deque>
#include <set>

#include <regex>
#include <string>
#include <cstring>

#include <chrono>

class PmergeMe {
    private:
        std::deque<int> dataDeq;
        std::list<int> dataList;
        long long listTime;
        long long deqTime;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();

        void sort(char **nbrs_str);
        int validateInput(char **nbrs_str);
        void sortBoth(std::string container);
        void printDuration();
};


template <typename Container>
bool hasDuplicates(const Container& container);
template <typename Container>
void insertionSortList(Container &lst);
template <typename Container>
Container mergeLists(const Container &l1, const Container &l2);
void fordJohnsonSortList(std::list<int> &lst, size_t chunkSize);
void fordJohnsonSortDeque(std::deque<int> &lst, size_t chunkSize);