/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:42:52 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/06 18:48:29 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "======DEFAULT CONTRUCTOR TEST==========" << std::endl;
	ClapTrap Patrick;
	Patrick.attack("fish");
	Patrick.setName("Patrick");
	Patrick.attack("fish");
	std::cout << "========================================" << std::endl;
	std::cout << std::endl;

	std::cout << "========STRING CONTRUCTOR TEST==========" << std::endl;
	ClapTrap Mr_Bin("Mr.Bin");
	Mr_Bin.attack("fish");
	std::cout << "========================================" << std::endl;
	std::cout << std::endl;

	std::cout << "==========COPY CONTRUCTOR TEST==========" << std::endl;
	ClapTrap Max(Mr_Bin);
	Max.attack("fish");
	Max.setName("Max");
	std::cout << "========================================" << std::endl;
	std::cout << std::endl;

	std::cout << "========STRING CONTRUCTOR TEST==========" << std::endl;
	ClapTrap Duck = Max;
	Duck.attack("fish");
	std::cout << "========================================" << std::endl;
	std::cout << std::endl;


	std::cout << "========FUNCTIONALITTY TEST=============" << std::endl;
	std::cout << "Pyke will runout of energy" << std::endl;
	std::cout << "Sona will die" << std::endl;
	ClapTrap test1("Pyke");
	ClapTrap test2("Sona");
	std::cout << std::endl;
	test1.attack("wall");
	test1.takeDamage(5);
	test1.beRepaired(3);
	test1.attack("wall");
	test1.attack("wall");
	test1.attack("wall");
	test1.attack("wall");
	test1.attack("wall");
	test1.attack("wall");
	test1.attack("wall");
	test1.attack("wall");
	test1.attack("wall");
	test1.beRepaired(3);
	std::cout << std::endl;
	std::cout << std::endl;
	test2.takeDamage(5);
	test2.beRepaired(100);
	test2.attack("door");
	test2.takeDamage(50);
	test2.takeDamage(50);
	test2.takeDamage(50);
	test2.beRepaired(100);
	test2.attack("door");
	std::cout << std::endl;
	std::cout << "========================================" << std::endl;
    return 0;
}