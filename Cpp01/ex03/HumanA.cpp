/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:39:46 by spike             #+#    #+#             */
/*   Updated: 2025/03/06 10:05:36 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nname, Weapon &wweapon) : name(nname), weapon(wweapon) {}

void	HumanA::attack()
{
	std::cout << name << "attack with their " << weapon.getType() << std::endl;
}
