/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:33:28 by spike             #+#    #+#             */
/*   Updated: 2025/04/26 18:09:39 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// COLPIEN

Form::Form() : _name("Untitled"), _isSigned(false), _signGrade(1), _execGrade(1) {}

Form::Form(std::string const name, bool isSigned, int signGrade, int execGrade) : _name(name), _isSigned(isSigned), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}


Form::Form(Form const &other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _execGrade(other._execGrade) {}

Form	&Form::operator=(Form const &other)
{
	if (this != &other)
	{
		_isSigned = other._isSigned;
		_signGrade = other._signGrade;
		_execGrade = other._execGrade;
	}
	return (*this);
}

Form::~Form() {}



// EXCEPTION CLASS

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

Form::FormAlreadySigned::FormAlreadySigned(std::string const &name) throw() : _msg(name + " couldnt sign, form already signed!") {}

const char *Form::FormAlreadySigned::what() const throw()
{
	return (_msg.c_str());
}



// GETTERS

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getisSigned() const{
	return (_isSigned);
}

int	Form::getSignGrade() const{
	return (_signGrade);
}

int	Form::getExecGrade() const{
	return (_execGrade);
}


// OVERLOAD OPERATOR

std::ostream	&operator<<(std::ostream &o, Form &f)
{
	o << "The information about the contract name as : " << f.getName() <<" are :\n"
	<< "is signed = " << f.getisSigned() << "\n"
	<< "Grade to sign = " << f.getSignGrade()<< "\n"
	<< "Grade to execute = " << f.getExecGrade()<< std::endl;

	return (o);
}


// METHODS

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	SignForm(b);
}

void	Form::SignForm(Bureaucrat &b)
{
	if (_isSigned == true)
		throw FormAlreadySigned(b.getName());
	_isSigned = true;
	std::cout << b.getName() << " signed " << this->getName() << std::endl;
}
