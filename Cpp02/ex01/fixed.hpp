/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:44:27 by spike             #+#    #+#             */
/*   Updated: 2025/04/19 14:18:21 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private :
		int					nb;
		static const int	bits = 8;

	public :
		Fixed();
		Fixed(const int i);
		Fixed(const float j);
		Fixed(const Fixed &f);
		Fixed &operator=(const Fixed &f);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);

#endif


