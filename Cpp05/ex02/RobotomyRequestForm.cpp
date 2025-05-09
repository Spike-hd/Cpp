/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:47:37 by spike             #+#    #+#             */
/*   Updated: 2025/05/09 12:47:44 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("PresidentialPardon", false, 72, 45), _target("Marine") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("PresidentialForm", false, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other), _target(other._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat &b) const
{
	this->checkForExecute(b);

	std::cout << "Brr...." << std::endl;
	std::cout << "Brr...." << std::endl;
	std::cout << "Brr...." << std::endl;
	int i = rand();
	if (i % 2)
		std::cout << _target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << "The robotomization on " << _target << " failed!" << std::endl;
}
