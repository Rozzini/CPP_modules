/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:28:14 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/11 16:24:27 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//Construcros/destructors assigning overloading
AForm::AForm(): name(""), signGrade(0), execGrade(0)
{
	std::cout << "[AForm] Default constructor called, lowest possible grade setted" << std::endl;
	this->signStatus = false;
	return ;
}

//initializer list should be used to init const values	//↓ thats called initializer list
AForm::AForm(const std::string &name, const int signGrade, const int execGrade): 
            name(name), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "[AForm] constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
    this->signStatus = false;
	return ;
}

AForm::AForm(const AForm& src): name(src.getName()), signGrade(src.getSignGrade()), 
                             execGrade(src.getSExecGrade())
{
	std::cout << "[AForm] Copy constructor called" << std::endl;
	this->signStatus = false;
	return ;
}


AForm &AForm::operator=(const AForm &src)
{
	std::cout << "[AForm] Overloaded = operator called" << std::endl;
	std::cout << "const vars can't be overwritten" << std::endl;
	this->signStatus = src.signStatus;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "[AForm] Destructor called" << std::endl;
	return ;
}
//==============================================


//=================SET----GET===================
std::string		AForm::getName() const
{
    return (this->name);
}

int				AForm::getSignGrade() const
{
    return (this->signGrade);
}

int				AForm::getSExecGrade() const
{
    return (this->execGrade);
}

bool			AForm::getSignStatus() const
{
    return (this->signStatus);
}
//===============================================

//=================MEMBER-FUNCTIONS===============
void			AForm::beSigned(Bureaucrat &src)
{
	if (this->getSignStatus() == true)
	{
		std::cout << "[AForm] Form was signed already" << std::endl;
		return ;	
	}

    if (src.getGrade() <= this->getSignGrade())
	{
		this->signStatus = true;
		std::cout << "[AForm] Form was succesfully signed" << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}

void	AForm::checkExec( const Bureaucrat &executor ) const
{
	if (!this->signStatus || executor.getGrade() > this->execGrade)
		throw AForm::CantExecuteForm();
}
//================================================

std::ostream& operator<<(std::ostream& os, const AForm &src)
{
	os << "[AForm] name: " << src.getName() << std::endl
	<<	  "[AForm] sign grade: " << src.getSignGrade() << std::endl
	<<	  "[AForm] exec grade: " << src.getSExecGrade() << std::endl
	<<	  "[AForm] sign status: " << src.getSignStatus();
    return os;
}