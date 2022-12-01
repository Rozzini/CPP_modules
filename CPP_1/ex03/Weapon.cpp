/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 02:06:36 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 02:41:37 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

Weapon::~Weapon() {};

std::string Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}