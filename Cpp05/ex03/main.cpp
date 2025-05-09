/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:57:06 by spike             #+#    #+#             */
/*   Updated: 2025/05/09 12:47:20 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		AForm *form;


		std::cout << "\n--- Creation of a valid form ---\n";
		form = someRandomIntern.makeForm("ShrubberyCreationForm", "Garden");
		if (form)
		{
			Bureaucrat bob("Bob", 1);
			form->beSigned(bob);
			form->execute(bob);
			delete form;
		}

		std::cout << std::endl;

		std::cout << "\n--- Creation of an unvalid form ---\n";
		AForm *unknown = someRandomIntern.makeForm("Taxe et profit", "Societe");
		if (unknown)
			delete unknown;

		std::cout << std::endl;

		// Autres types
		AForm *robotForm = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		AForm *pardonForm = someRandomIntern.makeForm("PresidentialPardonForm", "Fry");

		Bureaucrat bruno("Bruno", 5);

		if (robotForm)
		{
			robotForm->beSigned(bruno);
			robotForm->execute(bruno);
			delete robotForm;
		}

		if (pardonForm)
		{
			pardonForm->beSigned(bruno);
			pardonForm->execute(bruno);
			delete pardonForm;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}


