/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:26:23 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:20:24 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] Default constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat& src)
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return ;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
	delete this->brain;
	return ;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "[Cat] Overloaded = operator called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
	return (*this);
}

void			Cat::makeSound() const
{
	std::cout << "[Cat] saying MEOW" << std::endl;
	return ;
}

Brain*			Cat::useBrain() const
{
	return (this->brain);
}