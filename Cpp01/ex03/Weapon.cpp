/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:55:21 by spike             #+#    #+#             */
/*   Updated: 2025/03/06 10:11:59 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string ttype)
{
	type = ttype;
}

const std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string ttype)
{
	type = ttype;
}

