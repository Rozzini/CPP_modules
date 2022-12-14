/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:34 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 20:40:54 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
                 AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "[SCF] Default constructor called, lowest possible grade setted" << std::endl;
    this->target = "default target";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): 
				  AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "[SCF] Constructor called" << std::endl;
    this->target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& src):
                  AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "[SCF] Copy constructor called" << std::endl;
    this->target = src.getTarget();
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &src)
{
    std::cout << "[SCF] Overloaded = operator called" << std::endl;
    this->target = src.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "[SCF] Destructor called" << std::endl;
	return ;
}


std::string     ShrubberyCreationForm::getTarget()
{
	return (this->target);
}

void	        ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->checkExec(executor);

    std::ofstream	file;
	std::string		fileName = this->target + "_shrubbery";
    file.open(fileName);
    file << "    ###" << std::endl
         << "   #o###" << std::endl
         << " #####o###" << std::endl
         << "#o#|#|#/###" << std::endl
         << " ###Y|/#o#" << std::endl
         << "  # }|{  #" << std::endl
         << "    }|{" << std::endl;
    file.close();
    std::cout << "tree was saved in file" << std::endl;
}