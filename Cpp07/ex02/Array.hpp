/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:15:53 by spike             #+#    #+#             */
/*   Updated: 2025/05/13 11:04:12 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T* _array;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& other);
		Array<T>& operator=(const Array<T>& other);
		~Array();

		class OutOfBounds : public std::exception
		{
			public:
				const char* what() const throw();
		};

		T				&operator[](unsigned int i);
		const T			&operator[](unsigned int i) const;
		unsigned int	size() const;
};

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array(const Array &other)
{
	_size = other._size;
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = other._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		delete [] _array;
		_size = other._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = other._array[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutOfBounds();
	return (_array[i]);
}

template <typename T>
const T	&Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw OutOfBounds();
	return (_array[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <typename T>
const char	*Array<T>::OutOfBounds::what() const throw()
{
	return ("Can't access : i > size of array");
}

template <typename T>
Array<T>::~Array()
{
	if (_array)
		delete [] _array;
}

#endif
