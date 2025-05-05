/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:03:27 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 15:09:07 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	private :
		std::string _type;

	public :
		// Colpien
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();

		virtual void	makeSound() const;
		std::string		getType() const;
		virtual void	showIdea(unsigned int i) const;
};

#endif
