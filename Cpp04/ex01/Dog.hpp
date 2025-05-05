/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:08:07 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 14:42:48 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain	*_brain;
	public :
		// Colpien
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();

		void	makeSound() const;
		void	showIdea(unsigned int i) const;
};

#endif
