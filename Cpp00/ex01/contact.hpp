/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:52:45 by spike             #+#    #+#             */
/*   Updated: 2025/03/02 16:32:35 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.hpp"

class Contact
{
	private :
		std::string	first_name;
		std::string	name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;

	public :
	Contact() {}
	Contact(std::string fname, std::string n_name, std::string n_nickname, std::string phone, std::string s_secret)
		: first_name(fname), name(n_name), nickname(n_nickname), phone_number(phone), secret(s_secret) {}
	void	display(int i);
	void	display_all();
};

