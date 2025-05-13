/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:16:02 by spike             #+#    #+#             */
/*   Updated: 2025/05/12 14:19:39 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try {
		std::cout << "=== Création d'un tableau d'entiers de taille 5 ===" << std::endl;
		Array<int> a(5);

		for (unsigned int i = 0; i < a.size(); ++i)
			a[i] = i * 10;

		std::cout << "Contenu du tableau a : ";
		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "\n=== Copie du tableau a dans b ===" << std::endl;
		Array<int> b = a;

		std::cout << "Modification de a[0] = 999" << std::endl;
		a[0] = 999;

		std::cout << "Contenu du tableau a : ";
		for (unsigned int i = 0; i < a.size(); ++i)
			std::cout << a[i] << " ";
		std::cout << std::endl;

		std::cout << "Contenu du tableau b (doit être inchangé) : ";
		for (unsigned int i = 0; i < b.size(); ++i)
			std::cout << b[i] << " ";
		std::cout << std::endl;

		std::cout << "\n=== Test de l'opérateur d'affectation ===" << std::endl;
		Array<int> c;
		c = a;

		std::cout << "Contenu du tableau c : ";
		for (unsigned int i = 0; i < c.size(); ++i)
			std::cout << c[i] << " ";
		std::cout << std::endl;

		std::cout << "\n=== Test d'accès hors limites ===" << std::endl;
		std::cout << a[10] << std::endl; // Devrait lancer une exception

	} catch (const std::exception& e) {
		std::cerr << "Exception attrapée : " << e.what() << std::endl;
	}

	return 0;
}
