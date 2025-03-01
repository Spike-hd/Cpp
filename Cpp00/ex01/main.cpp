/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:01:14 by spike             #+#    #+#             */
/*   Updated: 2025/02/28 18:24:00 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.hpp"

int	main(int ac, char **av)
{
	PhoneBook	phone;
	std::string order;
	int			i = 0;

	while (1)
	{
		std::cin >> order;
		if (order == "ADD")
			phone.add();
		else if (order == "SEARCH")
		{
			phone.search();
			phone.display();
		}
		else if (order == "EXIT")
			break ;
		else
			continue ;
	}
	return (0);
}
