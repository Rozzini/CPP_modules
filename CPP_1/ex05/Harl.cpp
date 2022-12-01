/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 06:07:11 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 07:06:58 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my " << std::endl;
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. " << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, " << std::endl;
	std::cout << "I wouldn't be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << std::endl;
	std::cout << "I've been coming for years whereas you started working here " << std::endl;
	std::cout << "since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! "  << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string er[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if (level == er[i])
		{
			switch(i) 
			{
				case 0:
					ft_ptr = &Harl::debug;
					(this->*ft_ptr)();
					return;
				case 1:
					ft_ptr = &Harl::info;
					(this->*ft_ptr)();
					return;
				case 2:
					ft_ptr = &Harl::warning;
					(this->*ft_ptr)();
					return;
				case 3:
					ft_ptr = &Harl::error;
					(this->*ft_ptr)();
					return;
			}
		}
	}
	std::cout << "[invalid lvl]" << std::endl;
	std::cout << std::endl;
}
