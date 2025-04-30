/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:16:18 by spike             #+#    #+#             */
/*   Updated: 2025/04/29 13:28:52 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap scav("Scavvy");
	FragTrap frag("Fraggy");

	std::cout << "\n--- SCAVTRAP ACTIONS ---\n";
	scav.attack("Fraggy");
	frag.takeDamage(20);
	scav.guardGate();

	std::cout << "\n--- FRAGTRAP ACTIONS ---\n";
	frag.attack("Scavvy");
	scav.takeDamage(30);
	frag.highFivesGuys();

	std::cout << "\n--- REPAIR PHASE ---\n";
	scav.beRepaired(15);
	frag.beRepaired(10);

	return 0;
}

