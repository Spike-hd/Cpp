/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:14:06 by spike             #+#    #+#             */
/*   Updated: 2025/04/09 16:05:21 by spike            ###   ########.fr       */
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
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
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
	mana = c.mana;
	ad = c.ad;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &c)
{
	if (this != &c)
	{
		name = c.name;
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
			std::cout << "ClapTrap" << name << "attacks" << target << ", causing " << ad << "points of damage!" << std::endl;
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




#endif;
