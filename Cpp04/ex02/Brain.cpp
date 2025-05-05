/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:15:42 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 14:35:52 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
	{
		if (i % 2 == 0)
			ideas[i] = "Thinking to sleep";
		else
			ideas[i] = "Thinking to eat";
	}

}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignement constructor called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

const std::string&	Brain::getIdea(unsigned int i) const
{
	return (this->ideas[i]);
}
