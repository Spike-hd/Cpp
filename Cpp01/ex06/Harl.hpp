/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:03:55 by spike             #+#    #+#             */
/*   Updated: 2025/04/28 15:12:44 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl
{
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public :
		void	complain(std::string level);
		void	filter(std::string level);
};

#endif
