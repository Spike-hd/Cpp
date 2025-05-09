/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:50:16 by spike             #+#    #+#             */
/*   Updated: 2025/05/09 11:08:37 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubberry", false, 145, 137), _target("empty") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubberry", false, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : AForm(other), _target(other._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat &b) const
{
	this->checkForExecute(b);

	std::ofstream ofs((_target + "_shrubbery").c_str());
	if (!ofs)
	{
		std::cerr << "Error: couldn't open file" << std::endl;
		return;
	}

	ofs << "               ,@@@@@@@,\n"
		   "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
		   "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
		   "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
		   "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
		   "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
		   "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
		   "       |o|        | |         | |\n"
		   "       |.|        | |         | |\n"
		   "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";

	ofs.close();
}
