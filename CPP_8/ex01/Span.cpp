/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 03:26:03 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/19 05:26:17 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//Construcros/destructors assigning overloading
Span::Span()
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Span::Span(unsigned int size)
{
	std::cout << "Constructor called" << std::endl;
	this->size = size;
	this->filling = 0;
	return ;
}

Span::Span(const Span& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Span &Span::operator=(const Span &src)
{
	std::cout << "Assigment operator called" << std::endl;
	this->size = src.size;
	this->filling = src.filling;
	this->container = src.container;
	return *this;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
//==============================================



//=================SET----GET===================
unsigned int		Span::getSize() const
{
	return (this->size);
}

unsigned int		Span::getFreeSapce() const
{
	return (this->size - this->filling);
}

std::vector<int>	Span::getContainer() const
{
	return (this->container);
}
//==============================================

//=================MEMBER-FUNCTIONS===============

void			Span::checkSpanErr()
{
	if (this->filling < 2)
		throw Span::LessTwoException();
}

void			Span::putNumber(int num)
{
	if (this->getFreeSapce() == 0)
		throw Span::FilledException();
	container.push_back(num);
	this->filling++;
}

void			Span::addNumber(int num)
{
	try
	{
		this->putNumber(num);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void			Span::fillRand()
{
	srand(time(0));
	while (this->getFreeSapce() > 0)
	{
		this->addNumber(rand());
	}
}

int			Span::shortestSpan()
{
	try
	{
		this->checkSpanErr();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}

	this->checkSpanErr();
	std::vector<int>			temp = this->container;
	std::vector<int>::iterator	iter;
	int							res = 0;
	int							tempres = 0;

	sort(temp.begin(), temp.end());
	iter = temp.begin();
	res = (*(iter + 1) - *iter);
	iter++;
	while (iter != temp.end() - 1)
	{
		tempres = (*(iter + 1) - *iter);
		if (tempres < res)
			res = tempres;
		iter++;
	}
	return res;
}

int			Span::longestSpan()
{
	try
	{
		this->checkSpanErr();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
	
	std::vector<int>	temp = this->container;
	sort(temp.begin(), temp.end());
	return (*(temp.end() - 1) - *(temp.begin()));
}

//==============================================

std::ostream	&operator<<( std::ostream &o, const Span &src )
{
	std::vector<int>	temp = src.getContainer();
	std::vector<int>::iterator	iter = temp.begin();
	while (iter != temp.end())
	{
		o << *iter << " ";
		iter++;	
	}
	return o;
}