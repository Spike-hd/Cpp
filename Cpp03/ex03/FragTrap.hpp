/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:37:27 by spike             #+#    #+#             */
/*   Updated: 2025/04/30 15:00:44 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
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
		void	highFivesGuys();
};


#endif
