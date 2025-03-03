/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:21:23 by spike             #+#    #+#             */
/*   Updated: 2025/03/03 16:04:32 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.hpp"

std::string modify_prompt(std::string prompt)
{
	if (prompt.size() > 10)
		return prompt.substr(0, 9) + ".";

    return prompt;
}

void Contact::display(int i)
{
	std::string modified_fname = modify_prompt(first_name);
	std::string modified_name = modify_prompt(name);
	std::string modified_nickname = modify_prompt(nickname);

	std::cout << std::right << std::setw(10) << i << "|"
			  << std::setw(10) << modified_fname << "|"
			  << std::setw(10) << modified_name << "|"
			  << std::setw(10) << modified_nickname << std::endl;
}

void	Contact::display_all(void)
{
	std::cout << first_name << std::endl;
	std::cout << name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << secret << std::endl;
}
