/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:04:31 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 22:25:31 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default constructor for Intern called" << std::endl;
	return;
}

Intern::Intern(const Intern &src)
{
	std::cout << "Copy constructor for Intern called" << std::endl;
	*this = src;
	return;
}

Intern &Intern::operator=(const Intern &src)
{
	std::cout << "Assignement operator for Intern called" << std::endl;
    *this = src;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Destructor for Intern called" << std::endl;
	return;
}

AForm	*Intern::makeForm(const std::string &formName, const std::string &target) const
{
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm	*form = NULL;

	for (int i = 0; i < 3; i++)
	{
        if (formName == forms[i])
		{
			switch(i) 
			{
				case 0:
					form = new PresidentialPardonForm(target);
					break;
				case 1:
				    form = new RobotomyRequestForm(target);
					break;
				case 2:
					form = new ShrubberyCreationForm(target);
					break;
			}
		}
	}
	if (form == NULL)
		std::cout << "[Intern] " << formName << "Form doesnt exist" << std::endl;
	else
		std::cout << "Intern created " << formName << std::endl;
	return form;
}