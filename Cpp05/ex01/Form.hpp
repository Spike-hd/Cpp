/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:47:07 by spike             #+#    #+#             */
/*   Updated: 2025/04/26 16:34:53 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private :
		std::string const	_name;
		bool				_isSigned;
		int					_signGrade;
		int					_execGrade;

	public :
		// Colpien
		Form();
		Form(std::string const name, bool isSigned, int signGrade, int execGrade);
		Form(Form const &other);
		Form	&operator=(Form const &other);
		~Form();

		//Classe d'exception
		class GradeTooHighException : public std::exception
		{
			public :
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char	*what() const throw();
		};
		class FormAlreadySigned : public std::exception
		{
			private :
				std::string const	_msg;
			public :
				FormAlreadySigned(std::string const &name) throw();
				const char	*what() const throw();
		};

		// getters
		std::string	getName() const;
		bool		getisSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		// methods
		void	beSigned(Bureaucrat &b);
		void	SignForm(Bureaucrat &b);
};

std::ostream	&operator<<(std::ostream &o, Form &f);

#endif

