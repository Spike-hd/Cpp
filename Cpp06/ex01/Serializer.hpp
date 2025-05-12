/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:17:00 by spike             #+#    #+#             */
/*   Updated: 2025/05/12 13:26:56 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"
#include <cstdint>
#include <stdint.h>

class Serializer
{
	private :
		Serializer();
		Serializer(Serializer const &other);
		Serializer	&operator=(Serializer const &other);
		~Serializer();

	public :
		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
