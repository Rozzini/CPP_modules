/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:09:54 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 04:10:26 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
	std::cout << "[C] Default constructor called" << std::endl;
	return;
}

C::C(const C &src)
{
	std::cout << "[C] Copy constructor called" << std::endl;
	*this = src;
	return;
}

C &C::operator=(const C &src)
{
	(void)src;
	std::cout << "[C] assignement operator called" << std::endl;
	return *this;
}

C::~C( void )
{
	return;
}

