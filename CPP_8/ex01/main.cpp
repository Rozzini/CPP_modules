/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:35:59 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/19 05:30:12 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "==========================================================" << std::endl;
	std::cout << "normal test with 5 numbers and trying to put more elements" << std::endl;
	Span sp = Span(5);
	std::cout << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp << std::endl;
	std::cout << std::endl;
	std::cout << "Shortest span " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span  " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	sp.addNumber(-345);
	sp.addNumber(-3425);
	sp.addNumber(5);
	std::cout << std::endl;
	std::cout << "==========================================================" << std::endl;

	std::cout << "Test with 1000 elements" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Span sp2 = Span(1000);
	std::cout << std::endl;
	sp2.fillRand();
	std::cout << sp2 << std::endl;
	std::cout << std::endl;
	std::cout << "Shortest span " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span  " << sp2.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "==========================================================" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Test with 20 000 elements" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Span sp3 = Span(20000);
	std::cout << std::endl;
	sp3.fillRand();
	std::cout << "Shortest span " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span  " << sp3.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "==========================================================" << std::endl;
	std::cout << std::endl;
	return 0;
}