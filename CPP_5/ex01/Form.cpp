/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:28:14 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/11 16:24:27 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Construcros/destructors assigning overloading
Form::Form(): name(""), signGrade(0), execGrade(0)
{
	std::cout << "[Form] Default constructor called, lowest possible grade setted" << std::endl;
	this->signStatus = false;
	return ;
}
//initializer list should be used to init const values	//↓ thats called initializer list
Form::Form(const std::string &name, const int signGrade, const int execGrade): 
            name(name), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "[Form] constructor called" << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
    this->signStatus = false;
	return ;
}

Form::Form(const Form& src): name(src.getName()), signGrade(src.getSignGrade()), 
                             execGrade(src.getSExecGrade())
{
	std::cout << "[Form] Copy constructor called" << std::endl;
	this->signStatus = false;
	return ;
}


Form &Form::operator=(const Form &src)
{
	std::cout << "[Form] Overloaded = operator called" << std::endl;
	std::cout << "const vars can't be overwritten" << std::endl;
	this->signStatus = src.signStatus;
	return (*this);
}

Form::~Form()
{
	std::cout << "[Form] Destructor called" << std::endl;
	return ;
}
//==============================================


//=================SET----GET===================
std::string		Form::getName() const
{
    return (this->name);
}

int				Form::getSignGrade() const
{
    return (this->signGrade);
}

int				Form::getSExecGrade() const
{
    return (this->execGrade);
}

bool			Form::getSignStatus() const
{
    return (this->signStatus);
}
//===============================================

//=================MEMBER-FUNCTIONS===============
void			Form::beSigned(Bureaucrat &src)
{
	if (this->getSignStatus() == true)
	{
		std::cout << "[Form] form was signed already" << std::endl;
		return ;	
	}

    if (src.getGrade() <= this->getSignGrade())
	{
		this->signStatus = true;
		std::cout << "[Form] form was succesfully signed" << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}
//================================================

std::ostream& operator<<(std::ostream& os, const Form &src)
{
	os << "[Form] name: " << src.getName() << std::endl
	<<	  "[Form] sign grade: " << src.getSignGrade() << std::endl
	<<	  "[Form] exec grade: " << src.getSExecGrade() << std::endl
	<<	  "[Form] sign status: " << src.getSignStatus();
    return os;
}