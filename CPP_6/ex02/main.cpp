/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:35:59 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 04:41:54 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base	*ptr;
	int		rd = std::rand() % 3;
	switch(rd)
	{
		case 0:
			ptr = new A();
			return ptr;
		case 1:
			ptr = new B();
			return ptr;
		case 2:
			ptr = new C();
			return ptr;
		default:
			ptr = new A();
			return ptr;
	}
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}


void identify(Base *p)
{
	A *a;
	if ((a = dynamic_cast<A *>(p)) != NULL)
		std::cout << "A" << std::endl;
	B *b;
	if ((b = dynamic_cast<B *>(p)) != NULL)
		std::cout << "B" << std::endl;
	C *c;
	if ((c = dynamic_cast<C *>(p)) != NULL)
		std::cout << "C" << std::endl;
}

// The dynamic_cast keyword casts a datum from one pointer or reference type 
// to another, performing a runtime check to ensure the validity of the cast.
// If you attempt to cast to pointer to a type that is not a type of   actual 
// object, the result of the cast will be NULL. If you  attempt  to  cast  to 
// reference to a type that is not a type of actual  object,  the  cast  will 
// throw a bad_cast exception.

int main()
{
	Base	*base;

	std::cout << "================================================================" << std::endl;
	std::cout << "Check using pointers" << std::endl;
	std::cout << std::endl;
	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;
	std::cout << "================================================================" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "================================================================" << std::endl;
	std::cout << std::endl << "Check using references" << std::endl;
	std::cout << std::endl;
	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;
	std::cout << "================================================================" << std::endl;
	return 0;
}
