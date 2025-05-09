/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:47:07 by spike             #+#    #+#             */
/*   Updated: 2025/04/26 16:34:53 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"

class AForm
{
	private :
		std::string const	_name;
		bool				_isSigned;
		int					_signGrade;
		int					_execGrade;

	public :
		// Colpien
		AForm();
		AForm(std::string const name, bool isSigned, int signGrade, int execGrade);
		AForm(AForm const &other);
		AForm	&operator=(AForm const &other);
		virtual ~AForm();

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
		class FormNotSignedException : public std::exception
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
				~FormAlreadySigned() throw();

		};

		// getters
		std::string		getName() const;
		bool			getisSigned() const;
		int				getSignGrade() const;
		int				getExecGrade() const;

		// methods
		void			beSigned(Bureaucrat &b);
		void			SignAForm(Bureaucrat &b);
		virtual void	execute(Bureaucrat &b) const = 0;
		void			checkForExecute(Bureaucrat &b) const;
};

std::ostream	&operator<<(std::ostream &o, AForm &f);


#endif

