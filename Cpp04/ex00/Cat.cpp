/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:46:47 by spike             #+#    #+#             */
/*   Updated: 2025/04/22 15:47:12 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {}

Cat::Cat(const Cat &other) : Animal(other) {}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Cat::~Cat() {}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuuuuu" << std::endl;
}
