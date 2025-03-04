/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:45:56 by spike             #+#    #+#             */
/*   Updated: 2025/03/04 19:51:14 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string name;
	std::string select;

	while (1)
	{
		std::cout << "Select a way to create a Zombie :" << std::endl;
		std::cout << "1 = on the heap\n2 = on the stack\n\"EXIT\" : if you want to leave\n" << std::endl;
		std::cin >> select;

		if (select == "1")
		{
			std::cout << "\nSelect a name for your zombie : ";
			std::cin >> name;
			Zombie *zombie = newZombie(name);
			zombie->announce();
			delete zombie;
		}
		else if (select == "2")
		{
			std::cout << "\nSelect a name for your zombie : ";
			std::cin >> name;
			randomChump(name);
		}
		else if (select == "EXIT")
			return (0);
		else
			std::cout << "Invalid option, try again.\n";
	}
}
