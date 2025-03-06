/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:15:27 by spike             #+#    #+#             */
/*   Updated: 2025/03/06 10:05:43 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon &weapon;

	public :
		HumanA(std::string nname, Weapon &wweapon);
		void	attack();
};

#endif
