/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:05:34 by spike             #+#    #+#             */
/*   Updated: 2025/06/02 15:47:05 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : dq(), vec() {}

PmergeMe::PmergeMe(const PmergeMe &other) : dq(other.dq), vec(other.vec) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		dq = other.dq;
		vec = other.vec;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}


bool PmergeMe::correctAV(std::string av)
{
	if (av.empty())
		return false;

	bool hasDigit = false;

	for (size_t i = 0; i < av.size(); ++i)
	{
		if (av[i] == ' ')
			continue;

		if (!std::isdigit(av[i]))
			return false;

		hasDigit = true;
	}
	return hasDigit;
}

void	PmergeMe::fillVec(std::string av)
{
	int nb;

	std::istringstream iss(av);
	while (iss >> nb)
		vec.push_back(nb);
}

void	PmergeMe::fillDq(std::string av)
{
	int nb;

	std::istringstream iss(av);
	while (iss >> nb)
		dq.push_back(nb);
}

void	PmergeMe::sortDq(std::deque<int> &dq)
{
	if (dq.size() <= 1)
		return ;

	std::deque<int> A;
	std::deque<int> B;

	for (size_t i = 0; i + 1 < dq.size(); i += 2)
	{
		if (dq[i] < dq[i + 1])
		{
			A.push_back(dq[i]);
			B.push_back(dq[i + 1]);
		}
		else
		{
			A.push_back(dq[i + 1]);
			B.push_back(dq[i]);
		}
	}

	if (dq.size() % 2)
		A.push_back(dq.back());
	sortDq(A);

	for (std::deque<int>::iterator it = B.begin(); it != B.end(); ++it)
	{
		std::deque<int>::iterator pos = std::lower_bound(A.begin(), A.end(), *it);
		A.insert(pos, *it);
	}
	dq = A;
}

void	PmergeMe::sortVec(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return ;

	std::vector<int> A;
	std::vector<int> B;

	for (size_t i = 0; i + 1 < vec.size(); i += 2)
	{
		if (vec[i] < vec[i + 1])
		{
			A.push_back(vec[i]);
			B.push_back(vec[i + 1]);
		}
		else
		{
			A.push_back(vec[i + 1]);
			B.push_back(vec[i]);
		}
	}

	if (vec.size() % 2)
		A.push_back(vec.back());
	sortVec(A);

	for (std::vector<int>::iterator it = B.begin(); it != B.end(); ++it)
	{
		std::vector<int>::iterator pos = std::lower_bound(A.begin(), A.end(), *it);
		A.insert(pos, *it);
	}
	vec = A;
}

void	PmergeMe::fillAndPrint(std::string av)
{
	int nb;
	int count = 0;

	if (!correctAV(av)) {
		std::cerr << "Bad args !" << std::endl;
		return ;
	}

	std::cout << "Before:";
	std::istringstream iss(av);
	while (iss >> nb) {
		std::cout << " " << nb;
		count++;
	}
	std::cout << std::endl;

	std::clock_t start_dq = std::clock();
	fillDq(av);
	sortDq(dq);
	std::clock_t end_dq = std::clock();

	std::clock_t start_vec = std::clock();
	fillVec(av);
	sortVec(vec);
	std::clock_t end_vec = std::clock();

	std::cout << "After: ";
	 for (std::deque<int>::const_iterator it = dq.begin(); it != dq.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	double time_dq = static_cast<double>(end_dq - start_dq) / CLOCKS_PER_SEC * 100000;
	double time_vec = static_cast<double>(end_vec - start_vec) / CLOCKS_PER_SEC * 100000;

	std::cout << "Time to process a range of "<< count << " elements with std::deque : " << time_dq << " us" << std::endl;
	std::cout << "Time to process a range of "<< count << " elements with std::vector : " << time_vec << " us" << std::endl;
}

