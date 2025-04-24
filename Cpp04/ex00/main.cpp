/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:45:01 by spike             #+#    #+#             */
/*   Updated: 2025/04/23 12:41:13 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "=== Basic Animal tests ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << " ";
	dog->makeSound();
	std::cout << cat->getType() << " ";
	cat->makeSound();

	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;

	std::cout << "\n=== WrongAnimal tests ===" << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrong->getType() << " ";
	wrong->makeSound();
	std::cout << wrongCat->getType() << " ";
	wrongCat->makeSound();

	delete wrong;
	delete wrongCat;

	std::cout << "\n=== Stack object test ===" << std::endl;
	Dog d2;
	Cat c2;
	d2.makeSound();
	c2.makeSound();

	return 0;
}


