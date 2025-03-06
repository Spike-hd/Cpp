/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 01:04:55 by spike             #+#    #+#             */
/*   Updated: 2025/03/05 08:55:15 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	name;
	std::string	number;
	Zombie		*horde;

	std::cout << "Select a number of Zombie to create :" << std::endl;
	std::cin >> number;
	std::cout << "Select their names :" << std::endl;
	std::cin >> name;

	horde = zombieHorde(std::stoi(number), name);
	for (int i = 0; i < std::stoi(number); i++)
		horde[i].announce();

	delete [] horde;
}
