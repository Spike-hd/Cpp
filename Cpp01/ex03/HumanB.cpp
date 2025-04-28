/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:35:51 by spike             #+#    #+#             */
/*   Updated: 2025/04/28 13:15:34 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nname)
{
	name = nname;
}

void	HumanB::setWeapon(Weapon &wweapon)
{
	weapon = &wweapon;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << "attack with their " << weapon->getType() << std::endl;
	else
		std::cout << name << "has no weapons !" << std::endl;
}

