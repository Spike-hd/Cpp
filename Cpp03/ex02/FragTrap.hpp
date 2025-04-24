/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:37:27 by spike             #+#    #+#             */
/*   Updated: 2025/04/21 16:50:39 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		// Colpien
		FragTrap();
		FragTrap(std::string nname);
		FragTrap(const FragTrap &t);
		FragTrap &operator=(const FragTrap &t);
		~FragTrap();

		// methodes
		void	attack(const std::string& target);
		void	FragTrap::highFivesGuys();
};


FragTrap::FragTrap()
{
	setFragTrap();
	std::cout << "Default constructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string nname) : ClapTrap(nname)
{
	setFragTrap();
	std::cout << "Constructor with name called for FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	setFragTrap();
	std::cout << "Copy constructor called for FragTrap" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called for FragTrap" << std::endl;
		ClapTrap::operator=(other);
		setFragTrap();
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called for FragTrap" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "We got this high Five guys !" << std::endl;
}


// methodes

void	FragTrap::attack(const std::string& target)
{
	if (this->getHp() > 0)
	{
		int mana = this->getMana();
		if (mana > 0)
		{
			std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAd() << " points of damage!" << std::endl;
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
