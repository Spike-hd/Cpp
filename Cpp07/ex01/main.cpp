/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:07:18 by spike             #+#    #+#             */
/*   Updated: 2025/05/12 14:09:32 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int& x) {
	x++;
}


void square(int& x) {
	x = x * x;
}

int main()
{

	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArrayLength = sizeof(intArray) / sizeof(int);

	std::cout << "Initial int array: ";
	for (size_t i = 0; i < intArrayLength; ++i) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	iter(intArray, intArrayLength, increment);

	std::cout << "After incrementing int array: ";
	for (size_t i = 0; i < intArrayLength; ++i) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	iter(intArray, intArrayLength, square);

	std::cout << "After squaring int array: ";
	for (size_t i = 0; i < intArrayLength; ++i) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;
}
