/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:26:09 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 13:56:20 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "iter.hpp"

#include <string>

#define SIZE 10
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


static void	testInt(void)
{
	std::cout << "\033[36;4m" << "testInt():" << CLEAR << std::endl;

	int	arr[SIZE];

	std::cout << GRAY << "Populating 'int arr[" << SIZE << "]'" << CLEAR << std::endl;
	for (int i = 0; i < SIZE; i++)
		arr[i] = i;

	std::cout << GRAY << "Call ::iter(arr, SIZE, &print)" << CLEAR << std::endl;
	::iter(arr, SIZE, &print);
}

static void	testDouble(void)
{
	std::cout << "\033[36;4m" << "testDouble():" << CLEAR << std::endl;

	double	arr[SIZE];

	std::cout << GRAY << "Populating 'double arr[" << SIZE << "]'" << CLEAR << std::endl;
	for (int i = 0; i < SIZE; i++)
		arr[i] = i;

	std::cout << GRAY << "Call ::iter(arr, SIZE, &print)" << CLEAR << std::endl;
	::iter(arr, SIZE, &print);
}

static void	testString(void)
{
	std::cout << "\033[36;4m" << "testString():" << CLEAR << std::endl;

	std::string	arr[SIZE];

	std::cout << GRAY << "Populating 'double arr[" << SIZE << "]'" << CLEAR << std::endl;
	for (int i = 0; i < SIZE; i++)
		arr[i] = "string" + std::to_string(i);

	std::cout << GRAY << "Call ::iter(arr, SIZE, &print)" << CLEAR << std::endl;
	::iter(arr, SIZE, &print);
}

static void	testClass(void)
{
	std::cout << "\033[36;4m" << "testClass():" << CLEAR << std::endl;

	Awesome	arr[SIZE];

	std::cout << GRAY << "Populating 'double arr[" << SIZE << "]'" << CLEAR << std::endl;
	for (int i = 0; i < SIZE; i++)
		arr[i] = Awesome(i);

	std::cout << GRAY << "Call ::iter(arr, SIZE, &print)" << CLEAR << std::endl;
	::iter(arr, SIZE, &print);

}


int	main(void)
{
	testInt();
	testDouble();
	testString();
	testClass();
	return (0);
}
