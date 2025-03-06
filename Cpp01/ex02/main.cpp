/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:27:55 by spike             #+#    #+#             */
/*   Updated: 2025/03/06 10:29:33 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string sentence;
	std::string *stringPTR;
	std::string &stringREF = sentence;

	sentence = "HI THIS IS BRAIN";
	stringPTR = &sentence;

	std::cout << "Memory address :" << std::endl;
	std::cout << "   str : " << &sentence << std::endl;
	std::cout << "   ptr : " << stringPTR << std::endl;
	std::cout << "   ref : " << &stringREF << std::endl;

	std::cout << "Value :" << std::endl;
	std::cout << "   str : " << sentence << std::endl;
	std::cout << "   ptr : " << *stringPTR << std::endl;
	std::cout << "   ref : " << stringREF << std::endl;
}
