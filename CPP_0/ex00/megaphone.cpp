/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 00:49:03 by mraspors          #+#    #+#             */
/*   Updated: 2022/11/27 01:02:44 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i = 1;
	int j;

	if(argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while(i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
			std::cout << (char)toupper(argv[i][j++]);
		i++;
	}
	std::cout << std::endl;
	return 0;
}
