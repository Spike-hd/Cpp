/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:24:30 by spike             #+#    #+#             */
/*   Updated: 2025/05/13 13:07:54 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;

	for (int i = 0; i < 10; ++i)
		vec.push_back(i);

	std::cout << "Test with vector:" << std::endl;
	try {
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Valeur trouvée dans vector: " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Erreur vector: " << e.what() << std::endl;
	}

	try {
		easyfind(vec, 42);
	} catch (const std::exception& e) {
		std::cerr << "Erreur vector: " << e.what() << std::endl;
	}
	return (0);
}
