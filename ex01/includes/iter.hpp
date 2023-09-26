/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:29:13 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/26 13:15:58 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>

template<typename T>
inline void	iter(T *arr, size_t length, void (*f)(T&))
{
	if (!arr)
		return ;
	for (size_t i = 0; i < length; i++)
		(*f)(arr[i]);
}

template<typename T>
inline void	iter(T *arr, size_t length, void (*f)(const T&))
{
	if (!arr)
		return ;
	for (size_t i = 0; i < length; i++)
		(*f)(arr[i]);
}
