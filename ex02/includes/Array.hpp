/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:13:17 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/24 12:59:34 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>

template <class T>
class	Array
{
	private:
		/* Attributs */
		T				*_arr;
		unsigned int	_size;

		/* Constructors & Destructors */

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */
		Array(void);
		Array(unsigned int n);

		Array(const Array &other);
		Array	&operator=(const Array &other);

		~Array(void);

		/* Member functions */

		unsigned int	size(void) const;

		/* Subscript operator overload */
		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
};

/* Constructors & Destructors */

/* Public */

template <class T>
Array<T>::Array(void): _size(0)
{
	std::cout << "\033[36;2m";
	std::cout << "Array : Default constructor called";
	std::cout << "\033[0m" << std::endl;

	_arr = new T[_size];
}

template <class T>
Array<T>::Array(unsigned int n): _size(n)
{
	std::cout << "\033[36;2m";
	std::cout << "Bureaucrat : constructor with n parameter called";
	std::cout << "\033[0m" << std::endl;
	_arr = new T[_size];
	for(unsigned int i = 0; i < _size; i++)
		_arr[i] = T();
}

template <class T>
Array<T>::Array(const Array &other): _size(other._size)
{
	std::cout << "\033[36;2m";
	std::cout << "Array : Copy constructor called";
	std::cout << "\033[0m" << std::endl;

	_arr = new T[_size];
	for(unsigned int i = 0; i < _size; i++)
		_arr[i] = other._arr[i];
}

template <class T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Array : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_size = other._size;

		if (_arr)
			delete[] _arr;

		_arr = new T[_size];
		for(unsigned int i = 0; i < _size; i++)
			_arr[i] = other._arr[i];
	}
	return (*this);
}

template <class T>
Array<T>::~Array(void)
{
	std::cout << "\033[33;2m";
	std::cout << "Array : Default destructor called";
	std::cout << "\033[0m" << std::endl;

	delete[] _arr;
}

/* Subscript operator overload */

template <class T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _arr[index];
}

template <class T>
const T	&Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return _arr[index];
}

/* Member functions */

/* Public */

template <class T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}
