/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:42:18 by spike             #+#    #+#             */
/*   Updated: 2025/05/09 13:06:21 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(Intern const &other) {(void)other;}
Intern	&Intern::operator=(Intern const &other) {(void)other; return *this;}
Intern::~Intern() {}

AForm	*Intern::makeForm(const std::string &FormName, const std::string &target)
{
	if (FormName == "ShrubberyCreationForm")
	{
		std::cout << "Intern prints " << FormName << std::endl;
		return new ShrubberyCreationForm(target);
	}
	else if (FormName == "RobotomyRequestForm")
	{
		std::cout << "Intern prints " << FormName << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (FormName == "PresidentialPardonForm")
	{
		std::cout << "Intern prints " << FormName << std::endl;
		return new PresidentialPardonForm(target);
	}
	else
	{
		std::cerr << "Error: unknown form name \"" << FormName << "\"" << std::endl;
		return (NULL);
	}
}
