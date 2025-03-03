/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:01:14 by spike             #+#    #+#             */
/*   Updated: 2025/03/03 15:57:15 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.hpp"

int	main()
{
	PhoneBook	phone;
	std::string	order;
	std::string	index;

	std::cout << "Welcome to your PhoneBook !" << std::endl;
	while (1)
	{
		std::cout << "\nPlease enter :\n\"ADD\" if you want to add a new contact\n\"SEARCH\" if you want to search threw the repertory\n\"EXIT\" if you want to leave\n" << std::endl;
		std::cin >> order;
		if (order == "ADD")
		{
			std::cin.ignore();
			phone.add();
		}
		else if (order == "SEARCH")
		{
			std::cin.ignore();
			phone.search();
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
