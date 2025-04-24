/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:45:48 by spike             #+#    #+#             */
/*   Updated: 2025/04/22 15:53:37 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal() : _type("Unknow wild animal")
{
}

AAnimal::AAnimal(std::string type) : _type(type) {}

AAnimal::AAnimal(const AAnimal &other)
{
	_type = other._type;
}

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

AAnimal::~AAnimal() {}

std::string	AAnimal::getType() const
{
	return (_type);
}
