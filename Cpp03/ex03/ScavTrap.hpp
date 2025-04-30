/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:14:06 by spike             #+#    #+#             */
/*   Updated: 2025/04/29 17:10:56 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		// Colpien
		ScavTrap();
		ScavTrap(std::string nname);
		ScavTrap(const ScavTrap &t);
		ScavTrap &operator=(const ScavTrap &t);
		~ScavTrap();

		// methodes
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
