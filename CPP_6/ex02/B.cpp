/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:06:43 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 04:09:02 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
	std::cout << "[B] Default constructor called" << std::endl;
	return;
}

B::B(const B &src)
{
	std::cout << "[B] Copy constructor called" << std::endl;
	*this = src;
	return;
}

B &B::operator=(const B &src)
{
	(void)src;
	std::cout << "[B] assignement operator called" << std::endl;
	return *this;
}

B::~B( void )
{
	return;
}

