/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:13:57 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/05 15:02:55 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream> 
#include <iomanip>
#include <string>
#include <cmath>

class Fixed {
private:
	int					fpn;
	static const int	bits = 8;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed& src);
	~Fixed();

	Fixed operator=(const Fixed &og);
    bool operator>(const Fixed &og) const;
	bool operator<(const Fixed &og) const;
	bool operator>=(const Fixed &og) const;
	bool operator<=(const Fixed &og) const;
	bool operator==(const Fixed &og) const;
	bool operator!=(const Fixed &og) const;
	Fixed operator+(const Fixed &og);
	Fixed operator-(const Fixed &og);
	Fixed operator*(const Fixed &og);
	Fixed operator/(const Fixed &og);
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed operator++();
	Fixed operator--();
	static Fixed min(Fixed &fixed1, Fixed &fixed2);
	static Fixed max(Fixed &fixed1, Fixed &fixed2);
	static Fixed min(Fixed const &fixed1, Fixed const &fixed2);
	static Fixed max(Fixed const &fixed1, Fixed const &fixed2);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	void setRawBits( float const raw );
};


std::ostream& operator<<(std::ostream& os, const Fixed &src);

#endif