/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:14:06 by spike             #+#    #+#             */
/*   Updated: 2025/04/21 16:44:40 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		// Colpien
		ScavTrap();
		ScavTrap(std::string nname);
		ScavTrap(const ScavTrap &t);
		ScavTrap &operator=(const ScavTrap &t);
		~ScavTrap();

		// methodes
		void	attack(const std::string& target);
		void	ScavTrap::guardGate();
};


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

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}


// methodes

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHp() > 0)
	{
		int mana = this->getMana();
		if (mana > 0)
		{
			std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;
			mana--;
			this->setMana(mana);
		}
		else
			std::cout << "Biip Boop, no energy to attack Biiip Boop" << std::endl;
	}
	else
	{
		std::cout << "Actually talking to you from the heaven, wtf are you doing ?" << std::endl;
	}
}


#endif;


