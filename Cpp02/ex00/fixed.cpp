/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:19:17 by spike             #+#    #+#             */
/*   Updated: 2025/04/28 15:41:35 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"


Fixed::Fixed() : nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	if (this != &f)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		nb = f.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (nb);
}

void	Fixed::setRawBits(const int raw)
{
	nb = raw;
}
