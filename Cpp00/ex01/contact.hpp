/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:52:45 by spike             #+#    #+#             */
/*   Updated: 2025/02/27 17:59:57 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private :
		std::string	first_name;
		std::string	name;
		std::string	nickname;
		std::string	phone_number;
		std::string secret;

	public :
	Contact();

};

// Constructeur test
Contact::Contact(void)
{
	std::cout << "What is his first name ?" << std::endl;
	std::cin >> first_name;

}
