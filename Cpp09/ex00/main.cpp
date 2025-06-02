/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:02:47 by spike             #+#    #+#             */
/*   Updated: 2025/05/27 13:24:28 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << "Please enter one file only !" << std::endl;
		return (0);
	}
	BitcoinExchange btc;
	btc.fill_map_csv("data.csv");
	btc.displayInput(av[1]);

	return (0);
}
