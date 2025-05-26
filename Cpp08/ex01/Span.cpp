/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:09:52 by spike             #+#    #+#             */
/*   Updated: 2025/05/13 13:24:20 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(const Span &other) : _array(other._array), _size(other._size) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_array = other._array;
		_size = other._size;
	}
	return (*this);
}

Span::~Span() {}

const char	*Span::InvalidSizeOfArray::what() const throw()
{
	return ("The size is lower than 2, couldn't make the operation");
}

const char	*Span::FullArray::what() const throw()
{
	return ("The container is already full !");
}

void	Span::addNumber(int i)
{
	if (_size == _array.size())
		throw FullArray();
	_array.push_back(i);
}

int	Span::longestSpan() const
{
	if (_array.size() < 2)
		throw InvalidSizeOfArray();

	int max = *std::max_element(_array.begin(), _array.end());
	int min = *std::min_element(_array.begin(), _array.end());

	return (max - min);
}

int Span::shortestSpan() const
{
	if (_array.size() < 2)
		throw InvalidSizeOfArray();

	std::vector<int> copied = _array;
	std::sort(copied.begin(), copied.end());

	int min = INT_MAX;
	for (size_t i = 1; i < copied.size(); ++i)
	{
		int diff = copied[i] - copied[i - 1];
		if (diff < min)
			min = diff;
	}
	return (min);
}
