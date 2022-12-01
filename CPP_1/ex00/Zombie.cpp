/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 02:29:29 by mraspors          #+#    #+#             */
/*   Updated: 2022/11/30 23:18:55 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () {};

Zombie::Zombie (std::string name)
{
    this->name = name;
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->name << " Has been destroyed" << std::endl;
    return ;
}

std::string Zombie::getName()
{
    return (this->name);
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}