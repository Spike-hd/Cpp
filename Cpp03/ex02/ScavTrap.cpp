/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:52:12 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 12:47:32 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	setScavTrap();
}

ScavTrap::ScavTrap(std::string nname) : ClapTrap(nname)
{
	setScavTrap();
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	setScavTrap();
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
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
