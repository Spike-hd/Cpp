/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:07:15 by spike             #+#    #+#             */
/*   Updated: 2025/06/01 22:09:42 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : polish() {}

RPN::RPN(const RPN &other) : polish(other.polish) {}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
		polish = other.polish;
	return *this;
}

RPN::~RPN() {}


bool	RPN::validStr(std::string av)
{
	std::string validChar = "0123456789+-*/ ";
	int digit = 0;
	int operators = 0;

	if (av.empty())
		return false ;
	for (size_t i = 0; i < av.size(); ++i)
	{
		if (validChar.find(av[i]) == std::string::npos)
			return false;
		if (std::isdigit(av[i]))
			digit++;
		else if (av[i] != ' ')
			operators++;
	}
	if (!operators || operators != digit - 1)
		return false ;
	return true;
}

void	RPN::makeOp(char c)
{
	if (polish.size() < 2)
		throw std::runtime_error("Error: Couldn't make the operation");
	int	b = polish.top();
	polish.pop();
	int	a = polish.top();
	polish.pop();

	switch (c)
	{
		case '+' :
			polish.push(a + b);
			break ;
		case '-' :
			polish.push(a - b);
			break ;
		case '*' :
			polish.push(a * b);
			break ;
		case '/' :
			if (b == 0)
				throw std::runtime_error("Error: division by zero");
			polish.push(a / b);
			break ;
	}
}

void	RPN::solveInput(std::string av)
{
	if (!validStr(av)) {
		std::cerr << "Couldn't make the operation" << std::endl;
		return ;
	}
	size_t i = 0;
	while (av[i])
	{
		while (av[i] == ' ')
			i++;
		if (std::isdigit(av[i])) {
			int nb = av[i] - '0';
			polish.push(nb);
		}
		else
			makeOp(av[i]);
		i++;
	}

	if (polish.size() != 1) {
		std::cerr << "Error: Something went wrong" << std::endl;
		return;
	}

	std::cout << polish.top() << std::endl;
}
