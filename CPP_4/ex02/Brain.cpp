/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:28:25 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:20:17 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& src)
{
	std::cout << "[Brain] Copy constructor called" << std::endl;
	std::copy(src.ideas, src.ideas + 100, this->ideas);
	return ;
}

Brain &Brain::operator=(const Brain &src)
{
	std::cout << "[Brain] Overloaded = operator called" << std::endl;
	std::copy(src.ideas, src.ideas + 100, this->ideas);
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] Default contructor called" << std::endl;
	return ;
}

void			Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i > 99)
	{
		std::cout << "[Brain] Invalid idea number" << std::endl;
		return ;
	}
	(this->ideas[i]) = idea;
}

std::string		Brain::getIdea(int i)
{
	if (i < 0 || i > 99)
	{
		std::cout << "[Brain] Invalid idea number" << std::endl;
		return NULL;
	}
	return (this->ideas[i]);
}