/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:06:47 by spike             #+#    #+#             */
/*   Updated: 2025/04/22 16:06:47 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : _type("Dog") {}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	_type = other._type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal() {}

void	WrongAnimal::makeSound() const
{
	std::cout << "Grr" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}
