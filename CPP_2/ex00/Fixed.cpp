/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:42:13 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/04 08:23:39 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ()
{
    std::cout << "Default constructor called" << std::endl;
    this->fpn = 0;
    return ;
}

Fixed::Fixed (const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fpn = src.getRawBits();
    return ;
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed   Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignation operator called" << std::endl;
    this->fpn = src.getRawBits();
    return (*this);
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fpn);
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fpn = raw;
}