/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 02:29:05 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 01:12:04 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z1 = NULL;
	Zombie *z2 = NULL;
    Zombie  test;

	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "				Test guy, stack allocated" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
    test.announce();
    test.setName("TEST GUY");
    test.announce();
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	
	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "				z1, z2, heap allocated" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
    z1 = newZombie("ARGH");
    z2 = newZombie("Jhon");
    z1->announce();
    z2->announce();
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	
	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
    std::cout << "random chumps will anunce them selfs and die after" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
    randomChump("Albert");
    randomChump("Uilbert");
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	
	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "	z1, z2, should be removed manually" << std::endl;
	std::cout << "cos they were created using NEW key word" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	delete(z1);
	delete(z2);
	std::cout << "=====================================================" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "		test guy will be removed automatiaclly" << std::endl;
	std::cout << "		cos he was allocated on stack" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
    return 0;
}