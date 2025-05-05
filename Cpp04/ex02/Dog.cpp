/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:47:31 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 15:22:38 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignement constructor called" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "Wouaf wouaf" << std::endl;
}

void	Dog::showIdea(unsigned int i) const
{
	if (i >= 100)
		i %= 100;
	std::string msg = this->_brain->getIdea(i);
	std::cout << "The dog is : " << msg << std::endl;
}
