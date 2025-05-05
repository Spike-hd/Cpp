/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:16:18 by spike             #+#    #+#             */
/*   Updated: 2025/05/02 13:07:04 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap scav("Scav");
	FragTrap frag("Frag");

	std::cout << "\n--- SCAVTRAP ACTIONS ---\n";
	scav.attack("Frag");
	frag.takeDamage(20);
	scav.guardGate();

	std::cout << "\n--- FRAGTRAP ACTIONS ---\n";
	frag.attack("Scav");
	scav.takeDamage(30);
	frag.highFivesGuys();

	std::cout << "\n--- REPAIR PHASE ---\n";
	scav.beRepaired(15);
	frag.beRepaired(10);

	return 0;
}

