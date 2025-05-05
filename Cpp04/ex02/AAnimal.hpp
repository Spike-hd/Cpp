/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:03:27 by spike             #+#    #+#             */
/*   Updated: 2025/04/22 16:15:40 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
	private :
		std::string _type;

	public :
		// Colpien
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &other);
		AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal();

		virtual void	makeSound() const = 0;
		std::string		getType() const;
		virtual void	showIdea(unsigned int i) const = 0;
};

#endif
