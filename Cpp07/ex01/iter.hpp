/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:21:51 by spike             #+#    #+#             */
/*   Updated: 2025/05/12 14:07:59 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>

template <typename T>
void	iter(T *addr, size_t size, void (*fct)(T&))
{
	for (size_t i = 0; i < size; i++)
		fct(addr[i]);
}
