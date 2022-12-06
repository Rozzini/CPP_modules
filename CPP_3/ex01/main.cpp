/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:42:52 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/06 20:00:33 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*===============================================================================*/
int main() {
	
	ScavTrap test1("Pyke");

	std::cout << std::endl;
	std::cout << "HP: " << test1.getHP() << std::endl;
	std::cout << "EP: " << test1.getEP() << std::endl;
	std::cout << "AD: " << test1.getAD() << std::endl;
	std::cout << std::endl;
	test1.attack("fish");
	std::cout << std::endl;
	test1.takeDamage(56);
	std::cout << std::endl;
	test1.beRepaired(14);
	std::cout << std::endl;
	test1.guardGate();
	std::cout << std::endl;
	return 0;
}