/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:23 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 19:34:09 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Construcros/destructors assigning overloading
Bureaucrat::Bureaucrat(): name("default name")
{
	std::cout << "[Bureaucrat] Default constructor called, lowest possible grade setted" << std::endl;
	this->grade = 150;
	return ;
}
//initializer list should be used to init const values	//↓ thats called initializer list
Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade)
{
	std::cout << "[Bureaucrat] constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src): name(src.getName())
{
	std::cout << "[Bureaucrat] Copy constructor called" << std::endl;
	this->grade = src.grade;
	return ;
}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "[Bureaucrat] Overloaded = operator called" << std::endl;
	std::cout << "Name is const and can't be overwritten, only grade was copied" << std::endl;
	this->grade = src.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrat] Destructor called" << std::endl;
	return ;
}
//==============================================


//=================SET----GET===================
std::string		Bureaucrat::getName() const
{
	return (this->name);
}

int				Bureaucrat::getGrade() const
{
	return (this->grade);	
}
//==============================================


//=================MEMBER-FUNCTIONS===============
void			Bureaucrat::incrementGrade(int nb)
{
	std::cout << "[Bureaucrat] Calling increment function" << std::endl;
	if (grade - nb < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade - nb > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade -= nb;
}

void			Bureaucrat::decrementGrade(int nb)
{
	std::cout << "[Bureaucrat] Calling decrement function" << std::endl;
	if (grade + nb < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade + nb > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += nb;	
}

void			Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed [form]: " << form.getName() <<  std::endl;
	}
	catch(const std::exception& e)
	{
		
		std::cout << this->getName() << " couldn't sign " << 
		form.getName() <<  " because " << e.what() << '\n';
	}
	
}

void	Bureaucrat::executeForm( const AForm &form ) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executes form " << form.getName() << std::endl;
		return ;
	}
	catch (AForm::CantExecuteForm &e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
}
//================================================


std::ostream& operator<<(std::ostream& os, const Bureaucrat &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();
    return os;
}