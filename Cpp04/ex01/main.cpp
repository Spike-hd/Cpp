/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:45:01 by spike             #+#    #+#             */
/*   Updated: 2025/05/05 15:22:52 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const int size = 6;
	Animal* animals[size];

	for (int i = 0; i < size / 2; ++i) {
		animals[i] = new Dog();
	}
	for (int i = size / 2; i < size; ++i) {
		animals[i] = new Cat();
	}
	animals[1]->showIdea(9);
	animals[3]->showIdea(6);

	for (int i = 0; i < size; ++i) {
		delete animals[i];
	}

	return 0;
}





