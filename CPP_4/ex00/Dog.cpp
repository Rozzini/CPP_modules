/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:26:33 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:10:33 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog& src)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	this->type = src.type;
	return ;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "[Dog] Overloaded = operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void			Dog::makeSound() const
{
	std::cout << "[Dog] saying GAW" << std::endl;
	return ;
}