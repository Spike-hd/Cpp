/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:42:18 by spike             #+#    #+#             */
/*   Updated: 2025/05/09 14:10:21 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(Intern const &other) {(void)other;}
Intern	&Intern::operator=(Intern const &other) {(void)other; return *this;}
Intern::~Intern() {}



AForm	*Intern::makeForm(const std::string &FormName, const std::string &target)
{
	int j = -1;
	std::string AllNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	AForm *forms[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};

	for (int i = 0; i < 3; ++i)
	{
		if (FormName == AllNames[i])
		{
			std::cout << "Intern has created " << FormName << std::endl;
			j = i;
		}
		else
		 delete forms[i];
	}
	if (j == -1)
	{
		std::cout << "Intern couldn't create the file " << FormName << std::endl;
		return (NULL);
	}

	return forms[j];
}
