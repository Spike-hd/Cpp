/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:11:56 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 14:17:11 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private :
		Brain *_brain;
	public :
		// Colpien
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();

		void	makeSound() const;
		void	showIdea(unsigned int i) const;
};

#endif
