/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:47:03 by spike             #+#    #+#             */
/*   Updated: 2025/03/04 19:58:48 by spike            ###   ########.fr       */
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
		Zombie(std::string nname) : name(nname) {}
		void announce();
		~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
