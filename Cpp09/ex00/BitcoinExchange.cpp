/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:42:35 by spike             #+#    #+#             */
/*   Updated: 2025/06/02 14:48:50 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _csvData(other._csvData) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		_csvData = other._csvData;
	return *this;
}
BitcoinExchange::~BitcoinExchange() {}


bool	BitcoinExchange::validDate(const std::string &date) const
{
	if (date.length() < 10 || date[4] != '-' || date[7] != '-')
		return false;

	for (size_t i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(date[i]))
			return false;
	}

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	int max_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (year < 2008 || year > 2025)
		return false;
	if (month < 1 || month > 12)
		return false;
	if (day < 1 || day > max_days[month - 1])
		return false;

	return true;
}

float	BitcoinExchange::getClosestRate(const std::string& date) const
{
	std::map<std::string, float>::const_iterator it = _csvData.lower_bound(date);
	if (it != _csvData.end() && it->first == date)
		return it->second;
	if (it != _csvData.begin())
		--it;
	return it->second;
}

bool	BitcoinExchange::validFloat(const std::string& value) const
{
	bool coma = false;
	size_t i = 0;
	while (value[i] == ' ')
		i++;
	if (value[i] == '-')
		i++;
	for (; i < value.size(); ++i)
	{
		if (std::isdigit(value[i]))
			continue ;
		else if (value[i] == '.' && coma == false) {
			coma = true ;
			continue ;
		}
		else
			return false ;
	}
	return true ;
}

void	BitcoinExchange::fill_map_csv(std::string csv)
{
	std::ifstream file(csv.c_str());
	std::string line;
	std::string date;
	std::string value;

	if (!file.is_open()) {
		std::cerr << "Erreur : impossible d'ouvrir le fichier " << csv << std::endl;
		return;
	}
	std::getline(file, line);

	while (std::getline(file, line))
	{
		size_t pos = line.find(",");
		if (pos != std::string::npos)
		{
			date = line.substr(0, pos);
			value = line.substr(pos + 1);
		}
		if (!date.empty() && !value.empty() && validFloat(value))
		{
			_csvData[date] = std::atof(value.c_str());
		}
	}
	file.close();
}

void	BitcoinExchange::displayInput(std::string input)
{
	std::ifstream file(input.c_str());
	std::string line;
	std::string date;
	std::string value;

	if (!file.is_open()) {
		std::cerr << "Erreur : impossible d'ouvrir le fichier " << input << std::endl;
		return;
	}
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size_t pos = line.find("|");
		if (pos == std::string::npos)
		{
			std::cout << "Error bad input => " << line << std::endl;
			continue ;
		}
		date = line.substr(0, pos);
		value = line.substr(pos + 1);

		if (!validFloat(value))
			std::cout << "Error: with nb => " << line << std::endl;
		else
		{
			float nb = std::atof(value.c_str());
			if (nb < 0) {
				std::cout << "Error: not a positive number." << std::endl;
				continue ;
			}
			else if (nb > 1000) {
				std::cout << "Error: too large a number." << std::endl;
				continue ;
			}
			else if (!validDate(date)) {
				std::cout << "Error: invalid date" << std::endl;
				continue ;
			}
			float rate = getClosestRate(date);
			float result = rate * nb;
			std::cout << date << " => " << nb << " = " << result << std::endl;
		}
	}
	file.close();
}
