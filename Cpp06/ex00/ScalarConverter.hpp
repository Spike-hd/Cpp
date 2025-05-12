/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:17:47 by spike             #+#    #+#             */
/*   Updated: 2025/05/12 12:58:21 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <sstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <climits>

class ScalarConverter
{
	private :
		ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter	&operator=(ScalarConverter const &other);
		~ScalarConverter();

	public :
		static void	convert(std::string input);
};


#endif
