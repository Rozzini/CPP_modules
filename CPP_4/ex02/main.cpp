/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:07:23 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:30:34 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << std::endl;
	Animal *animal[4];

	std::cout << "CREATING===============================" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Put some ideas in their brain" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			char c1 = i + '0';
			char c2 = j + '0';
			std::string animalNum;
			std::string ideaNum;
			animalNum += c1;
			ideaNum += c2;
			std::string idea = animalNum + " Idea: " + ideaNum; 
			animal[i]->useBrain()->setIdea(j, idea);
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
			std::cout << "idea animal " << i << " " << animal[i]->useBrain()->getIdea(j) << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Check for deep copies===============" << std::endl;
	std::cout << "create cat using copy constructor, new cat should have data brain of old cat" << std::endl;
	Cat kitty;
	kitty.useBrain()->setIdea(0, "I am cat");
	kitty.useBrain()->setIdea(1, "food");
	std::cout << std::endl;
	std::cout << "check ideas of old cat" << std::endl;
	std::cout <<  kitty.useBrain()->getIdea(0) << std::endl;
	std::cout << kitty.useBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	std::cout << "Do copy of cat using assigment" << std::endl;
	Cat kitten = kitty;
	std::cout << "check ideas of new cat" << std::endl;
	std::cout << kitten.useBrain()->getIdea(0) << std::endl;
	std::cout << kitten.useBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	std::cout << "Do copy of cat using copy constructor" << std::endl;
	Cat kitten2 = kitty;
	std::cout << "check ideas of new cat" << std::endl;
	std::cout << kitten2.useBrain()->getIdea(0) << std::endl;
	std::cout << kitten2.useBrain()->getIdea(1) << std::endl;

	std::cout << std::endl;
	std::cout << "DELETING===============================" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animal[i];
		std::cout << std::endl;
	}
	return 0;
}