/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:39:15 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 14:11:43 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private :
		std::string ideas[100];

	public :
		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain();

		const std::string &getIdea(unsigned int i) const;
};

#endif
