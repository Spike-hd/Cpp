/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:44:01 by spike             #+#    #+#             */
/*   Updated: 2025/06/01 22:10:18 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <deque>
#include <ctime>

class PmergeMe
{
	private:
		std::deque<int>		dq;
		std::vector<int>	vec;

		bool	correctAV(std::string av);
		void	fillDq(std::string av);
		void	fillVec(std::string av);
		void	sortDq(std::deque<int> &dq);
		void	sortVec(std::vector<int> &vec);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		void	fillAndPrint(std::string av);
};
