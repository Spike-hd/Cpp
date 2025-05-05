/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:01:47 by spike             #+#    #+#             */
/*   Updated: 2025/04/30 15:01:57 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default constructor called for DiamondTrap" << std::endl;
	hp = FragTrap::hp;
	mana = ScavTrap::mana;
	mana_max = ScavTrap::mana_max;
	ad = FragTrap::ad;
}

DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), _name(name)
{
	std::cout << name << "has been created as a DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
	std::cout << "Copy constructor called for DiamondTrap" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called for DiamondTrap" << std::endl;
		ClapTrap::operator=(other);
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called for DiamondTrap" << std::endl;
}
