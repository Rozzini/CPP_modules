/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:51 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 20:48:15 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): 
				  AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "[RRF] Default constructor called, lowest possible grade setted" << std::endl;
    this->target = "default target";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): 
				  AForm("RobotomyRequestForm", 75, 45)
{
	std::cout << "[RRF] Constructor called" << std::endl;
    this->target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& src):
			     AForm("RobotomyRequestForm", 75, 45)
{
    std::cout << "[RRF] Copy constructor called" << std::endl;
	this->target = src.getTarget();
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &src)
{
    std::cout << "[RRF] Overloaded = operator called" << std::endl;
    this->target = src.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[RRF] Destructor called" << std::endl;
	return ;
}


std::string     RobotomyRequestForm::getTarget()
{
	return (this->target);
}

void	        RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkExec(executor);
	std::cout << "* Unbearable drilling noises *" << std::endl;
	if (std::rand() % 2)
		std::cout <<this->target << " has been successfully robotomized" << std::endl;
	else
		std::cout << "The robotomy for " << this->target << " failed" << std::endl;
}