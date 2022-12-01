/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:06:57 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 03:42:31 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA() {};

void	HumanA::attack()
{
	std::string type = this->weapon.getType();
	
	std::cout << this->name
	<< " attacks with their "
	<< type << std::endl;
}