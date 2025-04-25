/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:58:17 by spike             #+#    #+#             */
/*   Updated: 2025/04/25 15:55:36 by spike            ###   ########.fr       */
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
		// Colpien
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat	&operator=(Bureaucrat const &other);
		~Bureaucrat();

		// getters
		std::string	getName() const;
		int			getGrade() const;

		// methods
		void		incr();
		void		decr();
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &b);

#endif
