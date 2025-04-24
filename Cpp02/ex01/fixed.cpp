/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:19:17 by spike             #+#    #+#             */
/*   Updated: 2025/04/19 14:19:59 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
	nb = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	nb = i << bits;
}

Fixed::Fixed(const float j)
{
	nb = static_cast<int>(roundf(j * (1 << bits)));
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

float	Fixed::toFloat() const
{
	return (static_cast<float>(nb) / (1 << bits));
}

int		Fixed::toInt() const
{
	return (nb >> bits);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}
