/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:16:47 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/06 20:11:49 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
//Construcros/destructors assigning overloading
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	ScavTrap operator=(const ScavTrap &src);
	~ScavTrap();
//==============================================

//=================MEMBER-FUNCTIONS===============
void	guardGate();
void	attack(const std::string& target);
void	beRepaired(unsigned int amount);
void	takeDamage(unsigned int amount);
//==============================================
};

#endif