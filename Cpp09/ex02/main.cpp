/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 10:46:13 by spike             #+#    #+#             */
/*   Updated: 2025/06/02 10:55:29 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cerr << "Need arguments" << std::endl;
		return 1;
	}
	PmergeMe merge;
	std::string str;
	for (int i = 1; i < ac; ++i)
		str = str + av[i] + " ";
	merge.fillAndPrint(str);
	return (0);
}
