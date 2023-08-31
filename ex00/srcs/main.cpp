/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:41:13 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 13:57:04 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "whatever.hpp"

#include <iostream>
#include <string>

#define RED "\033[031m"
#define GREEN "\033[032m"
#define GRAY "\033[037;2m"
#define CLEAR "\033[0m"

class Awesome
{
	public:

		Awesome( void ) : _n( 0 ) {}
		Awesome( int n ) : _n( n ) {}

		Awesome	&operator=(const Awesome &other)
		{
			if (this != &other)
				_n = other.getN();
			return (*this);
		}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

		int	getN(void) const { return (_n); }

	private:

		int _n;
};

std::ostream	&operator<<(std::ostream &os, const Awesome &awesome)
{
	os << awesome.getN();
	return (os);
}

static void	testClass(void)
{
	std::cout << "\033[36;4m" << "testClass():" << CLEAR << std::endl;
	Awesome	e(6);
	Awesome	f(-2);

	std::cout << GREEN << "e = " << e << ", f = " << f << CLEAR << std::endl;
	std::cout << GRAY << "::swap(e, f)" << CLEAR << std::endl;
	::swap(e, f);
	std::cout << GREEN << "e = " << e << ", f = " << f << CLEAR << std::endl;

	std::cout << std::endl;

	std::cout << GRAY << "min(e, f) = " << CLEAR << GREEN << ::min(e, f);
	std::cout << CLEAR << std::endl;
	std::cout << GRAY << "max(e, f) = " << CLEAR << GREEN << ::max(e, f);
	std::cout << CLEAR << std::endl;

	std::cout << std::endl;
}

static void	testInt(void)
{
	std::cout << "\033[36;4m" << "testInt():" << CLEAR << std::endl;
	int	a = 2;
	int	b = 3;

	std::cout << GREEN << "a = " << a << ", b = " << b << CLEAR << std::endl;
	std::cout << GRAY << "::swap(a, b)" << CLEAR << std::endl;
	::swap(a, b);
	std::cout << GREEN << "a = " << a << ", b = " << b << CLEAR << std::endl;

	std::cout << std::endl;

	std::cout << GRAY << "min(a, b) = " << CLEAR << GREEN << ::min(a, b) << CLEAR << std::endl;
	std::cout << GRAY << "max(a, b) = " << CLEAR << GREEN << ::max(a, b) << CLEAR << std::endl;

	std::cout << std::endl;
}

static void	testDouble(void)
{
	std::cout << "\033[36;4m" << "testDouble():" << CLEAR << std::endl;
	double	c = 4.5;
	double	d = 9.2;

	std::cout << GREEN << "c = " << c << ", d = " << d << CLEAR << std::endl;
	std::cout << GRAY << "::swap(c, d)" << CLEAR << std::endl;
	::swap(c, d);
	std::cout << GREEN << "c = " << c << ", d = " << d << CLEAR << std::endl;

	std::cout << std::endl;

	std::cout << GRAY << "min(c, d) = " << CLEAR << GREEN << ::min(c, d) << CLEAR << std::endl;
	std::cout << GRAY << "max(c, d) = " << CLEAR << GREEN << ::max(c, d) << CLEAR << std::endl;

	std::cout << std::endl;
}

static void	testSubject(void)
{
	std::cout << "\033[36;4m" << "testSubject():" << CLEAR << std::endl;
	int a = 2;
	int b = 3;

	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

int	main(void)
{
	testInt();
	testDouble();
	testClass();
	testSubject();
	return (0);
}
