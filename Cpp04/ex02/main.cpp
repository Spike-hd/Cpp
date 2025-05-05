/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:45:01 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 14:36:25 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const int size = 6;
	AAnimal* animals[size];

	for (int i = 0; i < size / 2; ++i) {
		animals[i] = new Dog();
	}
	for (int i = size / 2; i < size; ++i) {
		animals[i] = new Cat();
	}
	animals[2]->showIdea(7);
	animals[3]->showIdea(6);

	for (int i = 0; i < size; ++i) {
		delete animals[i];
	}

	return 0;
}





