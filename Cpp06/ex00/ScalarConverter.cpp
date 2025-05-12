/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:29:44 by spike             #+#    #+#             */
/*   Updated: 2025/05/12 13:19:41 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	display_impossible()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	display_char(std::string str)
{
	char c = str[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void display_int(std::string str)
{
	std::istringstream iss(str);
	double value;
	iss >> value;


	if (!isprint(static_cast<char>(value)) || value < 0 || value > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;

	if (value < INT_MIN || value > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << value << std::endl;
}

void display_comma(std::string str)
{
	std::istringstream iss(str);
	double value;
	iss >> value;


	if (!isprint(static_cast<char>(value)) || value < 0 || value > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;

	if (value < INT_MIN || value > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;

	std::cout << std::resetiosflags(std::ios::scientific | std::ios::fixed);
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << value << std::endl;
}

void	display_min_inf()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inf" << std::endl;
}

void	display_max_inf()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: +inff" << std::endl;
	std::cout << "double: +inf" << std::endl;
}

void	display_nan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

bool	isInt(std::string str)
{
	size_t i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;

	if (i == str.length())
		return (false);

	for (; i < str.length(); ++i)
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	is_decimal_point(std::string str)
{
	size_t i = 0;
	int count = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;

	if (i == str.length())
		return (false);

	for (; i < str.length(); ++i)
	{
		if (isdigit(str[i]))
			continue ;
		else if (str[i] == '.' && count == 0)
			count++;
		else if (str[i] == 'f' && i == str.length() - 1)
			continue ;
		else
			return (false);
	}
	return (true);
}

void	ScalarConverter::convert(std::string input)
{
	if (input == "-inf" || input == "-inff")
		display_min_inf();
	else if (input == "+inf" || input == "+inff")
		display_max_inf();
	else if (input == "nanf" || input == "nan")
		display_nan();
	else if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0]))
		display_char(input);
	else if (isInt(input) == true)
		display_int(input);
	else if (is_decimal_point(input) == true)
		display_comma(input);
	else
		display_impossible();
}
