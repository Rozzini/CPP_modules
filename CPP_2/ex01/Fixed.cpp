/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:42:13 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/05 14:46:09 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ()
{
    std::cout << "Default constructor called" << std::endl;
    this->fpn = 0;
    return ;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(num);
    return ;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(num);
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

std::ostream& operator<<(std::ostream& os, const Fixed &src)
{
    os << src.toFloat();
    return os;
}

float   Fixed::toFloat( void ) const
{
    return ((float)(this->fpn) / (float)(1 << this->bits));
}

int     Fixed::toInt( void ) const
{
    return (this->fpn >> this->bits);
}
    
int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fpn);
}

void    Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fpn = raw << this->bits;
}

void    Fixed::setRawBits( float const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fpn = round(raw * (1 << this->bits));

}