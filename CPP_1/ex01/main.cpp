/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:13:38 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 01:38:03 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *test1 = NULL;
	Zombie *test2 = NULL;
	Zombie *test3 = NULL;

	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "			normal test" << std::endl;
	std::cout << "		size: 5, name: mr. Crabs" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	test1 = zombieHorde(5, "mr. Crabs");
	for (int i = 0; i < 5; i++)
		test1[i].announce();
	std::cout << "=====================================================" << std::endl;

	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "			0 test" << std::endl;
	std::cout << "		size: 0, name: Patrick" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	test2 = zombieHorde(0, "Patrick");
	for (int i = 0; i < 0; i++)
		test2[i].announce();
	std::cout << "=====================================================" << std::endl;

	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "			negative test" << std::endl;
	std::cout << "		size: -5, name: Garry" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	test3 = zombieHorde(-5, "Garry");
	for (int i = 0; i < -5; i++)
		test3[i].announce();
	std::cout << "=====================================================" << std::endl;
	

	std::cout << "=====================================================" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "			Destroying all zombies" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	delete [] test1;
	std::cout << std::endl;
	delete [] test2;
	std::cout << std::endl;
	delete [] test3;
	std::cout << "=====================================================" << std::endl;
	return (0);
}