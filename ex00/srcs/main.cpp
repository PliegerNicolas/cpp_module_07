/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:41:13 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 11:52:09 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "whatever.hpp"

#include <iostream>
#include <string>

int	main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Swaping..." << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << std::endl;

	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "Swaping..." << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << std::endl;

	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
