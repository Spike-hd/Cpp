/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:01:14 by spike             #+#    #+#             */
/*   Updated: 2025/04/24 15:07:01 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.hpp"

int	main()
{
	PhoneBook	phone;
	phone.setIndex(-1);
	std::string	order;
	int i = -1;

	std::cout << "Welcome to your PhoneBook !" << std::endl;
	while (1)
	{
		std::cout << "\nPlease enter :\n\"ADD\" if you want to add a new contact\n\"SEARCH\" if you want to search threw the repertory\n\"EXIT\" if you want to leave\n" << std::endl;
		std::cin >> order;
		if (order == "ADD")
		{
			i++;
			phone.setIndex(i);
			std::cin.ignore();
			phone.add();
		}
		else if (order == "SEARCH")
		{
			std::cin.ignore();
			int j = phone.search();
			if (j == -1)
				std::cout << "You have no contact yet !" << std::endl;
			else
				phone.display();
		}
		else if (order == "EXIT")
			break ;
		else
		{
			std::cin.ignore();
			continue ;
		}
	}
	return (0);
}
