/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:41:34 by spike             #+#    #+#             */
/*   Updated: 2025/03/06 14:29:33 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private :
		std::string name;
		Weapon *weapon;

	public :
		HumanB(std::string nname);
		void	setWeapon(Weapon &wweapon);
		void	attack();
};

#endif

