/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:59:09 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:10:51 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "[WrongCat] Default constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat& src)
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	this->type = src.type;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "[WrongCat] Overloaded = operator called" << std::endl;
	this->type = src.type;
	return (*this);
}

void			WrongCat::makeSound() const
{
	std::cout << "[WrongCat] saying Wrong MEOW" << std::endl;
	return ;
}