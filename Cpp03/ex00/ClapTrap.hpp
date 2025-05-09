/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:14:06 by spike             #+#    #+#             */
/*   Updated: 2025/04/29 12:10:17 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected :
		std::string	name;
		int			hp;
		int			mana;
		int			mana_max;
		int			ad;

	public :
		// Colpien
		ClapTrap();
		ClapTrap(std::string nname);
		ClapTrap(const ClapTrap &c);
		ClapTrap &operator=(const ClapTrap &c);
		~ClapTrap();

		// methodes
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif
