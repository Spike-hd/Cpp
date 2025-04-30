/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:03:22 by spike             #+#    #+#             */
/*   Updated: 2025/04/29 19:11:22 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	swap(T a, T b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	return (b);
}
