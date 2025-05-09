/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:57:06 by spike             #+#    #+#             */
/*   Updated: 2025/05/09 13:11:47 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat high("Alice", 1);
		Bureaucrat low("Bob", 150);

		Form contract("NDA Contract", false, 50, 20);

		std::cout << high << std::endl;
		std::cout << low << std::endl;
		std::cout << contract << std::endl;

		std::cout << "\n--- Attempting to sign with low-grade bureaucrat ---\n";
		contract.beSigned(low); // devrait échouer

	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n--- Trying again with a high-grade bureaucrat ---\n";
	try {
		Bureaucrat high("Alice", 1);
		Form contract("NDA Contract", false, 50, 20);

		contract.beSigned(high); // devrait réussir
		std::cout << contract << std::endl;

	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}

