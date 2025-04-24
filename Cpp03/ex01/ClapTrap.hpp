/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:14:06 by spike             #+#    #+#             */
/*   Updated: 2025/04/21 16:43:06 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private :
		std::string	name;
		int			hp = 10;
		int			mana = 10;
		int			ad = 0;

	public :
		// Colpien
		ClapTrap();
		ClapTrap(std::string nname);
		ClapTrap(const ClapTrap &c);
		ClapTrap &operator=(const ClapTrap &c);
		~ClapTrap();

		// methodes
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			getHp();
		int			getMana();
		int			getAd();
		std::string	getName();

	protected :
		void	setScavTrap();
		void	setHp(int i);
		void	setMana(int i);
		void	setAd(int i);
};

ClapTrap::ClapTrap() : name("Untitled")
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string nname) : name(nname)
{
	std::cout << "Constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	name = c.name;
	hp = c.hp;
	mana = c.mana;
	ad = c.ad;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &c)
{
	if (this != &c)
	{
		name = c.name;
		hp = c.hp;
		mana = c.mana;
		ad = c.ad;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


// methodes

void	ClapTrap::attack(const std::string& target)
{
	if (hp > 0)
	{
		if (mana > 0)
		{
			std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << ad << " points of damage!" << std::endl;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((hp - amount) <= 0)
	{
		hp = 0;
		std::cout << "Rest In Pepperoni" << std::endl;
	}
	else
	{
		std::cout << "Mayday, we just lost " << amount << " hp !!" << std::endl;
		hp -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((mana + amount) > 10)
	{
		mana = 10;
		std::cout << "Fully charged, ready to slaaay" << std::endl;
	}
	else
	{
		std::cout << "Recovered " << amount << " of energy !" << std::endl;
		mana += amount;
	}
}

void	ClapTrap::setScavTrap()
{
	hp = 100;
	mana = 50;
	ad = 20;
}

int	ClapTrap::getHp()
{
	return hp;
}

int	ClapTrap::getMana()
{
	return mana;
}

int	ClapTrap::getAd()
{
	return ad;
}

std::string	ClapTrap::getName()
{
	return name;
}

void	ClapTrap::setHp(int i)
{
	hp = i;
}

void	ClapTrap::setMana(int i)
{
	mana = i;
}

void	ClapTrap::setAd(int i)
{
	ad = i;
}

#endif;
