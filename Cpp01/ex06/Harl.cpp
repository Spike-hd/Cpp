/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:37:48 by spike             #+#    #+#             */
/*   Updated: 2025/04/28 15:29:46 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	void (Harl::*call_harl[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*call_harl[i])();
			return ;
		}
	}
	std::cout << "Unknown level: " << level << std::endl;
}

void Harl::filter(std::string level)
{
	int j = -1;
	void (Harl::*call_harl[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			j = i;
		}
	}
	if (j == -1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}

	switch (j)
	{
		case 0:
			std::cout <<  "[" << levels[0] << "]" << std::endl;
			(this->*call_harl[0])();
		case 1:
			std::cout <<  "[" << levels[1] << "]" << std::endl;
			(this->*call_harl[1])();
		case 2:
			std::cout <<  "[" << levels[2] << "]" << std::endl;
			(this->*call_harl[2])();
		case 3:
			std::cout <<  "[" << levels[3] << "]" << std::endl;
			(this->*call_harl[3])();
	}
}
