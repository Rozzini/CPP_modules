/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:02:44 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/06 20:11:06 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
//Construcros/destructors assigning overloading
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	FragTrap operator=(const FragTrap &src);
	~FragTrap();
//==============================================

//=================MEMBER-FUNCTIONS===============
void	highFivesGuys(void);
void	attack(const std::string& target);
void	beRepaired(unsigned int amount);
void	takeDamage(unsigned int amount);
//==============================================
};

#endif