/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:07:23 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/11 18:16:29 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {

	std::cout << std::endl;
	std::cout << "#-------------------[1]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat("Finn", 44);
		Form form("Form_1", 43, 12);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}

	std::cout << std::endl;
	std::cout << "#-------------------[2]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat("Finn", 44);
		Form form("Form_2", 46, 12);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}

	std::cout << std::endl;
	std::cout << "#-------------------[3]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat("Jacke", 33);
		Form form("Form_3", 32, 12);
		try
		{
			form.beSigned(bureaucrat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form << std::endl;
	}

	std::cout << std::endl;
	std::cout << "#-------------------[4]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat("Jacke", 33);
		Form form("Form_4", 35, 12);
		try
		{
			form.beSigned(bureaucrat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << form << std::endl;
	}

	std::cout << "#----------------------------------------------#" << std::endl;
	return 0;
}