/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:44:44 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 11:48:37 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}


template<typename T>
T&	min(T &a, T &b)
{
	return (a < b ? a : b);
}

template<typename T>
T&	max(T &a, T &b)
{
	return (a > b ? a : b);
}
