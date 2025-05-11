/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 12:45:39 by spike             #+#    #+#             */
/*   Updated: 2025/05/11 12:59:17 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
	Data		*data = new Data;
	uintptr_t	int_addr;

	std::cout << "Original adress for the pointer Data : " << data << std::endl;

	int_addr = Serializer::serialize(data);
	std::cout << "Original adress converted in an int : " << int_addr << std::endl;

	data = Serializer::deserialize(int_addr);
	std::cout << "Now, back to a pointer address : " << data << std::endl;

	delete data;
	return 0;
}
