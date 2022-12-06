/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:16:59 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/06 19:57:10 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//===========================CONSTRUCTORS DESTRUCTORS====================================
ScavTrap::ScavTrap ()
{
	std::cout << "[Scav] Default constructor called" << std::endl;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	return ;
}

ScavTrap::ScavTrap (std::string name)
{
	std::cout << "[Scav] Constructor with str called" << std::endl;
	this->name = name;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	return;
}

ScavTrap::ScavTrap (const ScavTrap &src)
{
	std::cout << "[Scav] Copy constructor called" << std::endl;
	this->name = src.name;
	this->HP = src.HP;
	this->EP = src.EP;
	this->AD = src.AD;
	return ;
}

ScavTrap   ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "[Scav] Copy assignation operator called" << std::endl;
	this->name = src.name;
	this->HP = src.HP;
	this->EP = src.EP;
	this->AD = src.AD;
	return (*this);
}

ScavTrap::~ScavTrap ()
{
	std::cout << "[Scav] Destructor called" << std::endl;
	return ;
}
//=======================================================================================


//================================MEMBER FUNCTIONS=======================================

void	    ScavTrap::guardGate()
{
    if (this->getHP() <= 0)
	{
		std::cout << "ScavTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
    std::cout << "ScavTrap [" << this->getName() << "]: Entered gate keeper mode" << std::endl;
}

void		ScavTrap::attack(const std::string& target)
{
	if (this->getHP() <= 0)
	{
		std::cout << "ScavTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
	if (this->getEP() <= 0)
	{
		std::cout << "ScavTrap [" << this->getName() << "] Doesn't have enough EP cant attack!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap [" << this->getName() << "] attacks ["
	<< target << "] causing [" << this->getAD() << "] points of damage!!!" << std::endl;
	this->setEP(this->getEP() - 1);
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() <= 0)
	{
		std::cout << "ScavTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
	if (this->getEP() <= 0)
	{
		std::cout << "ScavTrap [" << this->getName() << "] Doesn't have enough EP Catn repair!" << std::endl;
		return ;
	}
	this->setHP(this->getHP() + amount);
	std::cout << "ScavTrap [" << this->getName() << "] restores ["
	<< amount << "] HP having [" << this->getHP() << "] HP currently" << std::endl;
	this->setEP(this->getEP() - 1);
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() <= 0)
	{
		std::cout << "ScavTrap [" << this->getName() << "]: ALREADY DEAD" << std::endl;
		return ;
	}
	this->setHP(this->getHP() - amount);
	if (this->getHP() <= 0)
		std::cout << "ScavTrap [" << this->getName() << "] : DEAD after revicieng ["
		<< amount << "] DMG from someone!" << std::endl;
	else
		std::cout << "ScavTrap [" << this->getName() << "] recieves ["
		<< amount << "] DMG having [" << this->getHP() << "] HP currently" << std::endl;
}


//=======================================================================================