/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:07:23 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/10 21:57:16 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	test1("Luffy", 2);
		std::cout << test1 << std::endl;
		test1.decrementGrade(1);
		std::cout << test1 << std::endl;
		test1.incrementGrade(2);
		std::cout << test1 << std::endl;
		test1.decrementGrade(10);
		std::cout << test1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat	testK("Kitty", 2);
		std::cout << testK << std::endl;
		testK.incrementGrade(1);
		std::cout << testK << std::endl;
		testK.incrementGrade(1);
		std::cout << testK << std::endl;
		testK.incrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat	test2("Finn", 150);
		std::cout << test2 << std::endl;
		test2.incrementGrade(1);
		std::cout << test2 << std::endl;
		test2.decrementGrade(1);
		std::cout << test2 << std::endl;
		test2.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat	test3("Jacke", 0);
		std::cout << test3 << std::endl;
		test3.decrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		Bureaucrat	test4("Pyke", 151);
		std::cout << test4 << std::endl;
		test4.incrementGrade(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}