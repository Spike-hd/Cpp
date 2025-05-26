/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 18:26:18 by spike             #+#    #+#             */
/*   Updated: 2025/05/13 13:10:18 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <iterator>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	_array;
		unsigned int		_size;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		class InvalidSizeOfArray : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class FullArray : public std::exception
		{
			public:
				const char* what() const throw();
		};


		void	addNumber(int i);
		int		shortestSpan() const;
		int		longestSpan() const;

};


#endif
