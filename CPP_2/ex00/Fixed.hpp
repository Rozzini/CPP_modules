/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:13:57 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/04 08:23:41 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>


class Fixed {
private:
	int					fpn;
	static const int	bits = 8;

public:
	Fixed();
	Fixed(const Fixed& src);
	~Fixed();

    Fixed operator=(const Fixed &og);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif