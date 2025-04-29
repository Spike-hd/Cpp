/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:06:03 by spike             #+#    #+#             */
/*   Updated: 2025/04/29 11:09:56 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Robot1");
	ClapTrap b("Robot2");

	a.attack("Trapster");
	b.takeDamage(3);

	b.beRepaired(5);
	b.attack("Clappy");
	a.takeDamage(4);

	return 0;
}
