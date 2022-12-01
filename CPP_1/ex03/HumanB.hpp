/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:44:21 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 03:47:28 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
 
class HumanB {
private:
	Weapon*			weapon;
	std::string		name;

public:
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void 	setWeapon(Weapon	*weapon);
};

#endif