/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:04:55 by spike             #+#    #+#             */
/*   Updated: 2025/04/28 13:08:22 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	name;
	std::string	number;
	int	numbers;
	Zombie		*horde;

	std::cout << "Select a number of Zombie to create :" << std::endl;
	std::cin >> number;
	std::cout << "Select their names :" << std::endl;
	std::cin >> name;
	std::istringstream iss(number);
	iss >> numbers;

	horde = zombieHorde(numbers, name);
	for (int i = 0; i < numbers; i++)
		horde[i].announce();

	delete [] horde;
}
