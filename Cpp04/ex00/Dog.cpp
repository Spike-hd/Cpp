/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:47:31 by spike             #+#    #+#             */
/*   Updated: 2025/04/22 15:47:54 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {}

Dog::Dog(const Dog &other) : Animal(other) {}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Dog::~Dog() {}

void	Dog::makeSound() const
{
	std::cout << "Wouaf wouaf" << std::endl;
}
