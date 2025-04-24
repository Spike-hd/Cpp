/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:10:07 by spike             #+#    #+#             */
/*   Updated: 2025/04/22 16:10:07 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat() {}

void	WrongCat::makeSound() const
{
	std::cout << "Miaouuuuuuu" << std::endl;
}
