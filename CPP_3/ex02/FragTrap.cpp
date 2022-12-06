/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:02:37 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/06 20:43:04 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//===========================CONSTRUCTORS DESTRUCTORS====================================
FragTrap::FragTrap ()
{
	std::cout << "[Scav] Default constructor called" << std::endl;
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
	return ;
}

FragTrap::FragTrap (std::string name)
{
	std::cout << "[Scav] Constructor with str called" << std::endl;
	this->name = name;
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
	return;
}

FragTrap::FragTrap (const FragTrap &src)
{
	std::cout << "[Scav] Copy constructor called" << std::endl;
	this->name = src.name;
	this->HP = src.HP;
	this->EP = src.EP;
	this->AD = src.AD;
	return ;
}

FragTrap   FragTrap::operator=(const FragTrap &src)
{
	std::cout << "[Scav] Copy assignation operator called" << std::endl;
	this->name = src.name;
	this->HP = src.HP;
	this->EP = src.EP;
	this->AD = src.AD;
	return (*this);
}

FragTrap::~FragTrap ()
{
	std::cout << "[Scav] Destructor called" << std::endl;
	return ;
}
//=======================================================================================


//================================MEMBER FUNCTIONS=======================================

void	    FragTrap::highFivesGuys(void)
{
    if (this->getHP() <= 0)
	{
		std::cout << "FragTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
    std::cout << "FragTrap [" << this->getName() << "]: Give me 5 pls :3" << std::endl;
}

void		FragTrap::attack(const std::string& target)
{
	if (this->getHP() <= 0)
	{
		std::cout << "FragTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
	if (this->getEP() <= 0)
	{
		std::cout << "FragTrap [" << this->getName() << "] Doesn't have enough EP cant attack!" << std::endl;
		return ;
	}
	std::cout << "FragTrap [" << this->getName() << "] attacks ["
	<< target << "] causing [" << this->getAD() << "] points of damage!!!" << std::endl;
	this->setEP(this->getEP() - 1);
}

void		FragTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() <= 0)
	{
		std::cout << "FragTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
	if (this->getEP() <= 0)
	{
		std::cout << "FragTrap [" << this->getName() << "] Doesn't have enough EP Catn repair!" << std::endl;
		return ;
	}
	this->setHP(this->getHP() + amount);
	std::cout << "FragTrap [" << this->getName() << "] restores ["
	<< amount << "] HP having [" << this->getHP() << "] HP currently" << std::endl;
	this->setEP(this->getEP() - 1);
}

void		FragTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() <= 0)
	{
		std::cout << "FragTrap [" << this->getName() << "]: ALREADY DEAD" << std::endl;
		return ;
	}
	this->setHP(this->getHP() - amount);
	if (this->getHP() <= 0)
		std::cout << "FragTrap [" << this->getName() << "] : DEAD after revicieng ["
		<< amount << "] DMG from someone!" << std::endl;
	else
		std::cout << "FragTrap [" << this->getName() << "] recieves ["
		<< amount << "] DMG having [" << this->getHP() << "] HP currently" << std::endl;
}


//=======================================================================================