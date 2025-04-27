/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:57:06 by spike             #+#    #+#             */
/*   Updated: 2025/04/26 11:32:28 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat a("Sabrina", 10);
		Bureaucrat b("Michel", 160);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	catch (const std::invalid_argument &str)
	{
		std::cerr << "Error : " << str.what() << std::endl;
	}
	try
	{
		Bureaucrat a("Sabrina", 10);
		std::cout << a << std::endl;
	}
	catch (const std::invalid_argument &str)
	{
		std::cerr << "Error : " << str.what() << std::endl;
	}
	try
	{
		Bureaucrat a("Seb", 1);
		a.incr();
		std::cout << a << std::endl;
	}
	catch (const std::invalid_argument &str)
	{
		std::cerr << "Error : " << str.what() << std::endl;
	}
	try
	{
		Bureaucrat a("Seb", 150);
		a.decr();
		std::cout << a << std::endl;
	}
	catch (const std::invalid_argument &str)
	{
		std::cerr << "Error : " << str.what() << std::endl;
	}
}
