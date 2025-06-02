/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:41:01 by spike             #+#    #+#             */
/*   Updated: 2025/06/02 10:49:44 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <map>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_csvData;

		bool	validFloat(const std::string& value) const;
		bool	validDate(const std::string& value) const;
		float	getClosestRate(const std::string& date) const;


	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void displayInput(std::string input);
		void fill_map_csv(std::string csv);
};

