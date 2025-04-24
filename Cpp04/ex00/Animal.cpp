/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:45:48 by spike             #+#    #+#             */
/*   Updated: 2025/04/22 15:53:37 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() : _type("Dog") {}

Animal::Animal(std::string type) : _type(type) {}

Animal::Animal(const Animal &other)
{
	_type = other._type;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Animal::~Animal() {}

void	Animal::makeSound() const
{
	std::cout << "Grr" << std::endl;
}

std::string	Animal::getType() const
{
	return (_type);
}
