/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:22:07 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 20:48:11 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): 
				  AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "[PPF] Default constructor called, lowest possible grade setted" << std::endl;
	this->target = "default target";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): 
				  AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "[PPF] Constructor called" << std::endl;
	this->target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& src):
				  AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "[PPF] Copy constructor called" << std::endl;
	this->target = src.getTarget();
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &src)
{
	std::cout << "[PPF] Overloaded = operator called" << std::endl;
	this->target = src.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[PPF] Destructor called" << std::endl;
	return ;
}


std::string     PresidentialPardonForm::getTarget()
{
	return (this->target);
}

void	        PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkExec(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}