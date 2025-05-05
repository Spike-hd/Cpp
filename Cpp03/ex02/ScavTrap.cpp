/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:52:12 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 13:05:30 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	setScavTrap();
	std::cout << "Default constructor called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string nname) : ClapTrap(nname)
{
	setScavTrap();
	std::cout << "Constructor with name called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	setScavTrap();
	std::cout << "Copy constructor called for ScavTrap" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called for ScavTrap" << std::endl;
		ClapTrap::operator=(other);
		setScavTrap();
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for ScavTrap" << std::endl;
}


// methodes

void	ScavTrap::attack(const std::string& target)
{
	if (hp > 0)
	{
		if (mana > 0)
		{
			std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
			mana--;
		}
		else
			std::cout << "Biip Boop, no energy to attack Biiip Boop" << std::endl;
	}
	else
	{
		std::cout << "Actually talking to you from the heaven, wtf are you doing ?" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
