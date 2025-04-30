/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:21:24 by spike             #+#    #+#             */
/*   Updated: 2025/04/29 17:51:43 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private :
		std::string _name;

	public :
		// Colpien
		DiamondTrap();
		DiamondTrap(std::string &name);
		DiamondTrap(const DiamondTrap &t);
		DiamondTrap &operator=(const DiamondTrap &t);
		~DiamondTrap();

};

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

#endif
