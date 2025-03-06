/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:50:20 by spike             #+#    #+#             */
/*   Updated: 2025/03/06 10:06:59 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	private :
		std::string type;

	public :
		Weapon(): type("") {}
		Weapon(std::string ttype);
		const std::string &getType();
		void setType(std::string ttype);
		//~Weapon();
};


#endif
