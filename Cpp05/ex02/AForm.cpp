/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:33:28 by spike             #+#    #+#             */
/*   Updated: 2025/04/26 18:09:39 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// COLPIEN

AForm::AForm() : _name("Untitled"), _isSigned(false), _signGrade(1), _execGrade(1) {}

AForm::AForm(std::string const name, bool isSigned, int signGrade, int execGrade) : _name(name), _isSigned(isSigned), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
}


AForm::AForm(AForm const &other) : _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _execGrade(other._execGrade) {}

AForm	&AForm::operator=(AForm const &other)
{
	if (this != &other)
	{
		_isSigned = other._isSigned;
		_signGrade = other._signGrade;
		_execGrade = other._execGrade;
	}
	return (*this);
}

AForm::~AForm() {}



// EXCEPTION CLASS

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("Form must be signed before being executed");
}

AForm::FormAlreadySigned::FormAlreadySigned(std::string const &name) throw() : _msg(name + " couldnt sign, form already signed!") {}

const char *AForm::FormAlreadySigned::what() const throw()
{
	return (_msg.c_str());
}

AForm::FormAlreadySigned::~FormAlreadySigned() throw() {}




// GETTERS

std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::getisSigned() const{
	return (_isSigned);
}

int	AForm::getSignGrade() const{
	return (_signGrade);
}

int	AForm::getExecGrade() const{
	return (_execGrade);
}


// OVERLOAD OPERATOR

std::ostream	&operator<<(std::ostream &o, AForm &f)
{
	o << "The information about the contract name as : " << f.getName() <<" are :\n"
	<< "is signed = " << f.getisSigned() << "\n"
	<< "Grade to sign = " << f.getSignGrade()<< "\n"
	<< "Grade to execute = " << f.getExecGrade()<< std::endl;

	return (o);
}


// METHODS

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	SignAForm(b);
}

void	AForm::SignAForm(Bureaucrat &b)
{
	if (_isSigned == true)
		throw FormAlreadySigned(b.getName());
	_isSigned = true;
	std::cout << b.getName() << " signed " << this->getName() << std::endl;
}


void	AForm::checkForExecute(Bureaucrat &b) const
{
	if (this->getisSigned() == false)
		throw FormNotSignedException();
	if (b.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
}
