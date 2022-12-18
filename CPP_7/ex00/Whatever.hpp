/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:57:35 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 05:03:52 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T> void swap(T &x, T &y)
{
	T temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T> T min(T &x, T &y)
{
	if (x < y)
		return x;
	else
		return y;
}

template <typename T> T max(T &x, T &y)
{
	if (x > y)
		return x;
	else
		return y;
}
#endif