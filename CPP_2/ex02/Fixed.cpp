/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:42:13 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/05 14:33:16 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//===================Constructor/destructor====================//
Fixed::Fixed ()
{
    this->fpn = 0;
    return ;
}

Fixed::Fixed(const int num)
{
    this->setRawBits(num);
    return ;
}

Fixed::Fixed(const float num)
{
    this->setRawBits(num);
    return ;
}

Fixed::Fixed (const Fixed& src)
{
    this->fpn = src.getRawBits();
    return ;
}

Fixed::~Fixed ()
{
    return ;
}
//===================------------------------------====================//

//===================operators overloading=============================//
Fixed   Fixed::operator=(const Fixed &src)
{
    this->fpn = src.getRawBits();
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &src)
{
    os << src.toFloat();
    return os;
}
//comperasion
bool Fixed::operator>(const Fixed &og) const
{
    return(this->toFloat() > og.toFloat());
}

bool Fixed::operator<(const Fixed &og) const
{
    return(this->toFloat() < og.toFloat());
}

bool Fixed::operator>=(const Fixed &og) const
{
    return(this->toFloat() >= og.toFloat());
}

bool Fixed::operator<=(const Fixed &og) const
{
   return(this->toFloat() <= og.toFloat());
}

bool Fixed::operator==(const Fixed &og) const
{
    return(this->toFloat() == og.toFloat());
}

bool Fixed::operator!=(const Fixed &og) const
{
  return(this->toFloat() != og.toFloat());
}

//--=--=--=-=-=-=-=---=-=-=-=-=-=-=-=-=-=-=
//math operations
Fixed Fixed::operator+(const Fixed &og)
{
	Fixed fixed;
	fixed.setRawBits(this->toFloat() + og.toFloat());
	return (fixed);
}

Fixed Fixed::operator-(const Fixed &og)
{
    Fixed fixed;
	fixed.setRawBits(this->toFloat() - og.toFloat());
	return (fixed);
}

Fixed Fixed::operator*(const Fixed &og)
{
	Fixed fixed;
	fixed.setRawBits(this->toFloat() * og.toFloat());
	return (fixed);
}

Fixed Fixed::operator/(const Fixed &og)
{
	Fixed fixed;
	fixed.setRawBits(this->toFloat() / og.toFloat());
	return (fixed);
}

//--=--=--=-=-=-=-=---=-=-=-=-=-=-=-=-=-=-=
//increment/decrement
Fixed Fixed::operator++(int)
{
    (this->fpn)++;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    (this->fpn)--;
    return (*this);
}

Fixed Fixed::operator++()
{
    (this->fpn)++;
    return (*this);
}

Fixed Fixed::operator--()
{
   (this->fpn)--;
    return (*this);
}
//--=--=--=-=-=-=-=---=-=-=-=-=-=-=-=-=-=-=
//===================--------------------=============================//


//==========================MIN-----MAX===============================//
Fixed Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 < fixed2)
        return fixed1;
    return fixed2;
}

Fixed Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
    if (fixed1 > fixed2)
        return fixed1;
    return fixed2;
}

Fixed Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
    if (fixed1 < fixed2)
        return fixed1;
	return fixed2;
}

Fixed Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
    if (fixed1 > fixed2)
        return fixed1;
    return fixed2;
}

//===================--------------------=============================//
    
float   Fixed::toFloat( void ) const
{
    float a = this->getRawBits();
    a = a / (1 << this->bits);
    return a;
}

int     Fixed::toInt( void ) const
{
    return (this->fpn >> this->bits);
}
    
int     Fixed::getRawBits( void ) const
{
    return (this->fpn);
}

void    Fixed::setRawBits( int const raw )
{
    this->fpn = raw << this->bits;
}

void    Fixed::setRawBits( float const raw )
{
    this->fpn = round(raw * (1 << this->bits));
}