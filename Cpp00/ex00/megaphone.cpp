/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:01:14 by spike             #+#    #+#             */
/*   Updated: 2025/04/24 14:14:24 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		for (size_t j = 0; j < str.size(); j++)
		{
			char c = std::toupper(av[i][j]);
			std::cout << c;
		}
	}
	std::cout << "" << std::endl;
	return (0);
}
