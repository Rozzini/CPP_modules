/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:26:33 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:20:36 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] Default constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog& src)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return ;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "[Dog] Overloaded = operator called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return (*this);
}

void			Dog::makeSound() const
{
	std::cout << "[Dog] saying GAW" << std::endl;
	return ;
}

Brain*			Dog::useBrain() const
{
	return (this->brain);
}