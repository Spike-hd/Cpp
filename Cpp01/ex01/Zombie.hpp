/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:51:26 by spike             #+#    #+#             */
/*   Updated: 2025/03/05 08:51:16 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	private :
		std::string name;

	public :
		Zombie() : name("") {}
		Zombie(std::string nname) : name(nname) {}
		void SetName(std::string name);
		void announce();
		~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);

#endif
