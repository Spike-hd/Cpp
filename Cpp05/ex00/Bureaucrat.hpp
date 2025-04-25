/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:58:17 by spike             #+#    #+#             */
/*   Updated: 2025/04/25 13:48:28 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private :
		std::string const	_name;
		int					_grade;

	public :
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat	&operator=(Bureaucrat const &other);
		~Bureaucrat();



};

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade > 150 || grade < 1)
		throw std::invalid_argument("grade is either too high or too low");
	_grade = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_name = other._name;
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

#endif
