/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:42:13 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/06 18:39:51 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//===========================CONSTRUCTORS DESTRUCTORS====================================
ClapTrap::ClapTrap ()
{
	std::cout << "Default constructor called" << std::endl;
	this->HP = 10;
	this->EP = 10;
	this->AD = 0;
	return ;
}

ClapTrap::ClapTrap (std::string name)
{
	std::cout << "Constructor with str called" << std::endl;
	this->name = name;
	this->HP = 10;
	this->EP = 10;
	this->AD = 0;
	return;
}

ClapTrap::ClapTrap (const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name = src.name;
	this->HP = src.HP;
	this->EP = src.EP;
	this->AD = src.AD;
	return ;
}

ClapTrap   ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->name = src.name;
	this->HP = src.HP;
	this->EP = src.EP;
	this->AD = src.AD;
	return (*this);
}

ClapTrap::~ClapTrap ()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
//=======================================================================================




//=======================================SET/GET=========================================

void		ClapTrap::setName(std::string name)
{
		this->name = name;
}

void		ClapTrap::setHP(int hp)
{
		this->HP = hp;
}

void		ClapTrap::setEP(int ep)
{
		this->EP = ep;
}

void		ClapTrap::setAD(int ad)
{
		this->AD = ad;
}

std::string	ClapTrap::getName()
{
	return (this->name);
}
int			ClapTrap::getHP()
{
	return (this->HP);
}

int			ClapTrap::getEP()
{
	return (this->EP);
}
int			ClapTrap::getAD()
{
	return (this->AD);
}

//=======================================================================================


//================================MEMBER FUNCTIONS=======================================

void		ClapTrap::attack(const std::string& target)
{
	if (this->getHP() <= 0)
	{
		std::cout << "ClapTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
	if (this->getEP() <= 0)
	{
		std::cout << "ClapTrap [" << this->getName() << "] Doesn't have enough EP cant attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap [" << this->getName() << "] attacks ["
	<< target << "] causing [" << this->getAD() << "] points of damage!!!" << std::endl;
	this->setEP(this->getEP() - 1);
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() <= 0)
	{
		std::cout << "ClapTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
	if (this->getEP() <= 0)
	{
		std::cout << "ClapTrap [" << this->getName() << "] Doesn't have enough EP Catn repair!" << std::endl;
		return ;
	}
	this->setHP(this->getHP() + amount);
	std::cout << "ClapTrap [" << this->getName() << "] restores ["
	<< amount << "] HP having [" << this->getHP() << "] HP currently" << std::endl;
	this->setEP(this->getEP() - 1);
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() <= 0)
	{
		std::cout << "ClapTrap [" << this->getName() << "]: ALREADY DEAD" << std::endl;
		return ;
	}
	this->setHP(this->getHP() - amount);
	if (this->getHP() <= 0)
		std::cout << "ClapTrap [" << this->getName() << "] : DEAD after revicieng ["
		<< amount << "] DMG from someone!" << std::endl;
	else
		std::cout << "ClapTrap [" << this->getName() << "] recieves ["
		<< amount << "] DMG having [" << this->getHP() << "] HP currently" << std::endl;
}


//=======================================================================================