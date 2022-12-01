/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 06:06:49 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 06:44:31 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("WARNING");
	harl.complain("asdc");
	harl.complain("brt");
	harl.complain("INFO");
	harl.complain("32rf1");
	harl.complain("WARNING");
	harl.complain("1");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("1asdsad");
	harl.complain("DEBUG");
	
	return 0;
}