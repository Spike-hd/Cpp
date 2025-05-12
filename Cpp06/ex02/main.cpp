/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:59:24 by spike             #+#    #+#             */
/*   Updated: 2025/05/12 13:45:06 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
	int i = std::rand() % 3;

	switch (i)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::bad_cast&) {}

	std::cout << "C" << std::endl;
}


int main()
{
	std::srand(std::time(0));

	std::cout << "Identifying with pointers:\n" << std::endl;
	for (int i = 0; i < 5; ++i) {
		Base* base = generate();
		std::cout << "identified as : ";
		identify(base);
		delete base;
	}

	std::cout << "\nIdentifying with references:\n" << std::endl;
	for (int i = 0; i < 5; ++i) {
		Base* base = generate();
		std::cout << "identified as : ";
		identify(*base);
		delete base;
	}

	return 0;
}
