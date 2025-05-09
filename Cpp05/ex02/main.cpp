/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:57:06 by spike             #+#    #+#             */
/*   Updated: 2025/05/09 11:16:58 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
			Bureaucrat boss("Alice", 1);
			Bureaucrat noobie("Bob", 150);

			ShrubberyCreationForm shrubForm("forest");
			RobotomyRequestForm robotForm("Bender");
			PresidentialPardonForm pardonForm("Marvin");

			std::cout << "\n--- Tentative d'exécution sans signature ---\n";
			try {
				shrubForm.execute(boss); // Doit échouer (non signé)
			}
			catch (const std::exception &e) {
				std::cout << "Erreur: " << e.what() << std::endl;
			}

			std::cout << "\n--- Signature des formulaires par Alice ---\n";
			shrubForm.beSigned(boss);
			robotForm.beSigned(boss);
			pardonForm.beSigned(boss);

			std::cout << "\n--- Tentative d'exécution par l'interne ---\n";
			try {
				shrubForm.execute(noobie); // Trop bas en grade
			}
			catch (const std::exception &e) {
				std::cout << "Erreur: " << e.what() << std::endl;
			}

			std::cout << "\n--- Exécution par Alice ---\n";
			shrubForm.execute(boss);
			robotForm.execute(boss);
			pardonForm.execute(boss);
		}
		catch (const std::exception &e) {
			std::cout << "Fatal error: " << e.what() << std::endl;
	}

	return 0;
}


