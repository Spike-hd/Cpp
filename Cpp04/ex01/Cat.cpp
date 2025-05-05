/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:46:47 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 15:22:02 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignement constructor called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuuuuuu" << std::endl;
}

void	Cat::showIdea(unsigned int i) const
{
	if (i >= 100)
		i %= 100;
	std::string msg = this->_brain->getIdea(i);
	std::cout << "The cat is : " << msg << std::endl;
}
