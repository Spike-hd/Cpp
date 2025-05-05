/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wron WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:03:49 by spike             #+#    #+#             */
/*   Updated: 2025/04/22 16:03:49 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	private :
		std::string _type;

	public :
		// Colpien
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		~WrongAnimal();

		void			makeSound() const;
		std::string		getType() const;
};

#endif
