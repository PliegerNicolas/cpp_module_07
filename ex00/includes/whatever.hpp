/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:44:44 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 12:42:23 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

/* Template permits defining generic classes, functions or data structures. */
/* You can make Class or function templates. Here we only create function templates. */
/* template<typename T> or template<class T>, who are virtually the same ... T is */
/* the template parameter. You could create instances of this class template in */
/* the case of a generic class. */

/* The inline keyword replaces the code where the functions are called instead */
/* of calling it. This can save ressources. Espacially for these type of functions.*/

template<typename T>
inline void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
inline T&	min(T &a, T &b)
{
	return (a < b ? a : b);
}

template<typename T>
inline T&	max(T &a, T &b)
{
	return (a > b ? a : b);
}
