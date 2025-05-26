/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:59:37 by spike             #+#    #+#             */
/*   Updated: 2025/05/13 11:36:32 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::iterator	easyfind(T& container, int val)
{
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
		throw std::runtime_error("Value not found in container");
	return (it);
}
