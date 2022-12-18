/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:06:24 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 04:09:45 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
	std::cout << "[A] Default constructor called" << std::endl;
	return;
}

A::A(const A &src)
{
	std::cout << "[A] Copy constructor called" << std::endl;
	*this = src;
	return;
}

A &A::operator=(const A &src)
{
	(void)src;
	std::cout << "[A] assignement operator called" << std::endl;
	return *this;
}

A::~A( void )
{
	return;
}

