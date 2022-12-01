/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:07:20 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 03:47:39 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB() {};

void	HumanB::attack()
{
	std::string type = this->weapon->getType();
	
	std::cout << this->name
	<< " attacks with their "
	<<  type << std::endl;
}

void 	HumanB::setWeapon(Weapon	*weapon)
{
	this->weapon = weapon;
}