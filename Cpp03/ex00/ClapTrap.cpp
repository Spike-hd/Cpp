/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:00:08 by spike             #+#    #+#             */
/*   Updated: 2025/04/29 12:12:11 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Untitled"), hp(10), mana(10), ad(0), mana_max(10)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string nname) : name(nname), hp(10), mana(10), ad(0), mana_max(10)
{
	std::cout << "Constructor for " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	name = c.name;
	mana = c.mana;
	ad = c.ad;
	mana_max = c.mana_max;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &c)
{
	if (this != &c)
	{
		name = c.name;
		mana = c.mana;
		ad = c.ad;
		mana_max = c.mana_max;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTried died on the battlefield" << std::endl;
}


// methodes

void	ClapTrap::attack(const std::string& target)
{
	if (hp > 0)
	{
		if (mana > 0)
			std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
		else
			std::cout << "Biip Boop, no energy to attack Biiip Boop" << std::endl;
	}
	else
	{
		std::cout << "Actually talking to you from the heaven, wtf are you doing ?" << std::endl;
	}

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((hp - amount) <= 0)
	{
		hp = 0;
		std::cout << "Rest In Pepperoni" << std::endl;
	}
	else
	{
		std::cout << "Mayday, we just lost " << hp - amount << " hp !!" << std::endl;
		hp -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((mana + amount) > mana_max)
	{
		mana = mana_max;
		std::cout << "Fully charged, ready to slaaay" << std::endl;
	}
	else
	{
		std::cout << "Recovered " << amount << " of energy !" << std::endl;
		mana += amount;
	}

}
