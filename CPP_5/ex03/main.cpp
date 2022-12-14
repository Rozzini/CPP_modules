/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:07:23 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 22:25:43 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << std::endl;
	Intern		intern;
	Bureaucrat	paul("Paul", 3);
	AForm		*form;

	std::cout << std::endl;
	std::cout << std::endl;
	form = intern.makeForm("Blah bLah Blah", "Justin");
	if (form)
		delete form;
	std::cout << std::endl;
	std::cout << std::endl;
	form = intern.makeForm("presidential pardon", "Maynard");
	if (form)
		delete form;
	std::cout << std::endl;
	std::cout << std::endl;
	form = intern.makeForm("shrubbery creation", "Danny");
	if (form)
		delete form;
	std::cout << std::endl;
	std::cout << std::endl;
	form = intern.makeForm("robotomy request", "Adam");
	form->beSigned(paul);
	form->execute(paul);
	if (form)
		delete form;
	std::cout << std::endl;
	std::cout << std::endl;
}