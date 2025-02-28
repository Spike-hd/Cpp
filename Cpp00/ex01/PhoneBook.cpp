/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:20:29 by spike             #+#    #+#             */
/*   Updated: 2025/02/28 18:21:33 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.hpp"

int	check_info(std::string input)
{
	for (int i = 0; i < input.size(); i++)
	{
		if (!std::isspace(input[i]))
			return (1);
	}
	return (0);
}

std::string	get_valid_input(const std::string &prompt)
{
	std::string input;
	std::cout << prompt;
	std::cin.ignore();
	std::getline(std::cin, input);

	while (check_info(input) == 0)
	{
		std::cout << "Impossible to have empty information. Try again.\n" << prompt;
		std::getline(std::cin, input);
	}
	return (input);
}

void PhoneBook::add()
{
	std::cout << "Please enter the information about your contact" << std::endl;

	std::string first_name = get_valid_input("First name : ");
	std::string name = get_valid_input("Name : ");
	std::string nickname = get_valid_input("Nickname : ");
	std::string phone_number = get_valid_input("Phone number : ");
	std::string secret = get_valid_input("His little secret : ");

	contacts[index] = Contact(first_name, name, nickname, phone_number, secret);

	index++;
	if (index > 7)
		index = 0;
}
