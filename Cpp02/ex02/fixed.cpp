/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:19:17 by spike             #+#    #+#             */
/*   Updated: 2025/04/20 16:30:28 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
	nb = 0;
//	std::cout << "Default constructor called" << std::endl;
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
//	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed &f)
{
	if (this != &f)
	{
//		std::cout << "Copy assignment operator called" << std::endl;
		nb = f.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
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

// < > <= >= == !=
bool	Fixed::operator>(const Fixed &other)
{
	return (nb > other.nb);
}

bool	Fixed::operator<(const Fixed &other)
{
	return (nb < other.nb);
}

bool	Fixed::operator<=(const Fixed &other)
{
	return (nb <= other.nb);
}

bool	Fixed::operator>=(const Fixed &other)
{
	return (nb >= other.nb);
}

bool	Fixed::operator==(const Fixed &other)
{
	return (nb == other.nb);
}

bool	Fixed::operator!=(const Fixed &other)
{
	return (nb != other.nb);
}

// + - * /
Fixed	Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

// ++ --
Fixed &Fixed::operator++()
{
	this->nb++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	this->nb++;
	return (temp);
}

Fixed &Fixed::operator--()
{
	this->nb--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->nb--;
	return (temp);
}


// min max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.nb > b.nb)
		return (b);
	return (a);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.nb > b.nb)
		return (b);
	return (a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.nb < b.nb)
		return (b);
	return (a);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.nb < b.nb)
		return (b);
	return (a);
}
