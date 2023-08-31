/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:12:55 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 15:27:47 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Array.hpp"

#include <string>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define GRAY "\033[37m"
#define CLEAR "\033[0m"

static void	testIntArray(void)
{
	std::cout << "\033[36;4m" << "testIntArray():" << CLEAR << std::endl;

	std::cout << GRAY <<"Array<int> arr1" << CLEAR << std::endl;
	Array<int>	arr1;
	std::cout << GRAY <<"Array<int> arr2(10)" << CLEAR << std::endl;
	Array<int>	arr2(10);

	std::cout << GREEN << "Fill arr1" << GRAY << std::endl;
	for (size_t i = 0; i < arr1.size(); i++)
		arr1[i] = i;
	std::cout << GREEN << "Print arr1" << GRAY << std::endl;
	for (size_t i = 0; i < arr1.size(); i++)
		std::cout << arr2[i] << std::endl;
	std::cout << GREEN << "Fill arr2" << GRAY << std::endl;
	for (size_t i = 0; i < arr2.size(); i++)
		arr2[i] = i;
	std::cout << GREEN << "Print arr2" << GRAY << std::endl;
	for (size_t i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << std::endl;

	std::cout << GREEN << "Access invalid index" << GRAY << std::endl;
	try
	{
		std::cout << arr2[arr2.size() + 1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}

static void	testDoubleArray(void)
{
	std::cout << "\033[36;4m" << "testDoubleArray():" << CLEAR << std::endl;

	std::cout << GRAY <<"Array<double> arr1" << CLEAR << std::endl;
	Array<double>	arr1;
	std::cout << GRAY <<"Array<double> arr2(4)" << CLEAR << std::endl;
	Array<double>	arr2(4);

	std::cout << GREEN << "Fill arr1" << GRAY << std::endl;
	for (size_t i = 0; i < arr1.size(); i++)
		arr1[i] = i;
	std::cout << GREEN << "Print arr1" << GRAY << std::endl;
	for (size_t i = 0; i < arr1.size(); i++)
		std::cout << arr2[i] << std::endl;
	std::cout << GREEN << "Fill arr2" << GRAY << std::endl;
	for (size_t i = 0; i < arr2.size(); i++)
		arr2[i] = i + static_cast<double>(i * 0.1);
	std::cout << GREEN << "Print arr2" << GRAY << std::endl;
	for (size_t i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << std::endl;

	std::cout << GREEN << "Access invalid index" << GRAY << std::endl;
	try
	{
		std::cout << arr2[arr2.size() + 1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

static void	testStringArray(void)
{
	std::cout << "\033[36;4m" << "testStringArray():" << CLEAR << std::endl;

	std::cout << GRAY <<"Array<std::string> arr1" << CLEAR << std::endl;
	Array<std::string>	arr1;
	std::cout << GRAY <<"Array<std::string> arr2(10)" << CLEAR << std::endl;
	Array<std::string>	arr2(10);

	std::cout << GREEN << "Fill arr1" << GRAY << std::endl;
	for (size_t i = 0; i < arr1.size(); i++)
		arr1[i] = i;
	std::cout << GREEN << "Print arr1" << GRAY << std::endl;
	for (size_t i = 0; i < arr1.size(); i++)
		std::cout << arr2[i] << std::endl;
	std::cout << GREEN << "Fill arr2" << GRAY << std::endl;
	for (size_t i = 0; i < arr2.size(); i++)
		arr2[i] = "string" + std::to_string(i);
	std::cout << GREEN << "Print arr2" << GRAY << std::endl;
	for (size_t i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << std::endl;

	std::cout << GREEN << "Access invalid index" << GRAY << std::endl;
	try
	{
		std::cout << arr2[arr2.size() + 1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

static void	testCopyConstructor(void)
{
	std::cout << "\033[36;4m" << "testCopyConstructor():" << CLEAR << std::endl;

	Array<std::string>	arr1(10);
	std::cout << GREEN << "Fill arr1" << GRAY << std::endl;
	for (size_t i = 0; i < arr1.size(); i++)
		arr1[i] = "string" + std::to_string(i);

	std::cout << GREEN << "Arr2(arr1)" << GRAY << std::endl;
	Array<std::string>	arr2(arr1);

	std::cout << GREEN << "arr2[5] = 42:" << GRAY << std::endl;
	arr2[5] = "42";
	std::cout << GREEN << "arr1:" << GRAY << std::endl;
	for (size_t i = 0; i < arr1.size(); i++)
		std::cout << arr1[i] << std::endl;
	std::cout << GREEN << "arr2:" << GRAY << std::endl;
	for (size_t i = 0; i < arr2.size(); i++)
		std::cout << arr2[i] << std::endl;

	std::cout << GREEN << "arr3 = arr1:" << GRAY << std::endl;
	Array<std::string>	arr3;
	arr3 = arr1;
	std::cout << GREEN << "arr3:" << GRAY << std::endl;
	for (size_t i = 0; i < arr3.size(); i++)
		std::cout << arr3[i] << std::endl;


}

int	main(void)
{
	testIntArray();
	testDoubleArray();
	testStringArray();
	testCopyConstructor();
	return (0);
}
