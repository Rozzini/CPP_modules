/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:23 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:12:39 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal] Default contsructor called" << std::endl;
	this->type = "Animal";
	return ;
}

Animal::Animal(const Animal& src)
{
	std::cout << "[Animal] Copy contsructor called" << std::endl;
	this->type = src.type;
	return ;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called" << std::endl;
	return ;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "[Animal] Overloaded = operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void			Animal::setType(std::string name)
{
	this->type = name;
}

std::string		Animal::getType() const
{
	return (this->type);
}

void			Animal::makeSound() const
{
	std::cout << "[Animal] Making animal noises" << std::endl;
	return ;
}

Brain*	Animal::useBrain() const
{
	std::cout << "I dont have brain (((" << std::endl;
	return NULL;
}