/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:35:59 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/19 23:16:32 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "==========================================" << std::endl;
	std::cout << "My test" << std::endl;
	MutantStack<int> m1;
	MutantStack<int> m2;
	m2.push(2);
	m2.push(4);
	m2.push(6);
	m2.push(8);
	m2.push(10);
	
	std::cout << "Before swaping" << std::endl;
	std::cout << "M1 :";
	for (MutantStack<int>::iterator i = m1.begin(); i != m1.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	std::cout << "M2 :";
	for (MutantStack<int>::iterator i = m2.begin(); i != m2.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	m2.swap(m1);
	std::cout << "After swaping" << std::endl;
	std::cout << "M1 :";
	for (MutantStack<int>::iterator i = m1.begin(); i != m1.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	std::cout << "M2 :";
	for (MutantStack<int>::iterator i = m2.begin(); i != m2.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	return 0;
}