/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:25:11 by spike             #+#    #+#             */
/*   Updated: 2025/04/24 15:06:31 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "project.hpp"

class PhoneBook
{
	private :
		Contact	contacts[8];
		int		index;

	public :
		PhoneBook() : index(0) {}
		void	add();
		int		search();
		void	display();
		void	setIndex(int i);
};

