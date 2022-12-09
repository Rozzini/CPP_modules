/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:58:59 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:10:42 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
	this->type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	this->type = src.type;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "[WrongAnimal] Overloaded = operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void			WrongAnimal::setType(std::string name)
{
	this->type = name;
}

std::string		WrongAnimal::getType() const
{
	return (this->type);
}

void			WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] Making WrongAnimal noises" << std::endl;
	return ;
}