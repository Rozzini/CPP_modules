/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:35:59 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 05:20:02 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	print(std::string &str)
{
	std::cout << "printing.... ->  " << str << std::endl;
}

void	addOne(int	&n)
{
	n++;
}

int main( void ) 
{
	std::string str[5] = { "Blue", "Red", "Orange", "Yellow", "Black"};
	int			ar[5] = {1, 2, 3, 4, 5};
	::iter(str, 5, &print);
	
	std::cout << std::endl;
	std::cout << "Before iter call for int array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
	::iter(ar, 5, &addOne);
	std::cout << "After iter call for int array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
	return 0;
}