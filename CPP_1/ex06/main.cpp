/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 06:06:49 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 07:08:23 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "i need only 1 argument" 
		<< " no more, no less" << std::endl;
		return 0;
	}
	
	std::string lvl(argv[1]);
	Harl harl(lvl);

	harl.complain("WARNING");

	harl.complain("INFO");

	harl.complain("WARNING");

	harl.complain("DEBUG");
	
	harl.complain("ERROR");

	harl.complain("DEBUG");
	
	return 0;
}