/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:08:16 by spike             #+#    #+#             */
/*   Updated: 2025/05/13 13:25:17 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main()
{
	try
	{
		Span sp = Span(5);
		std::cout << "=== Basic test ===" << std::endl;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(-17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n=== Exception test (too many nbs) ===" << std::endl;
		Span sp = Span(1);
		sp.addNumber(8);
		sp.addNumber(4);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n=== Exception test (too few numbers) ===" << std::endl;
		Span sp3(2);
		sp3.addNumber(42);
		std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
