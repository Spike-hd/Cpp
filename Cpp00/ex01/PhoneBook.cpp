/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 18:20:29 by spike             #+#    #+#             */
/*   Updated: 2025/03/03 16:07:44 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.hpp"

int check_info(const std::string &input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (!std::isspace(static_cast<unsigned char>(input[i])))
			return 1;
	}
	return 0;
}

std::string	get_valid_input(const std::string &prompt)
{
	std::string input;
	std::cout << prompt;
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

void	PhoneBook::search(void)
{
	for (int i = 0; i < index; i++)
		contacts[i].display(i);
}

void	PhoneBook::display()
{
	std::cout << "\nWhich contact would you like to see ?" << std::endl;
	std::string n = get_valid_input("Index : ");
	int i = std::stoi(n);
	if (i > -1 && i < index)
		contacts[i].display_all();
	else
	std::cout << "\nThe contact at this index doesn't exist" << std::endl;
}
