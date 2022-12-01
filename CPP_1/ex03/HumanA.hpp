/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:43:39 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 03:43:41 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
 
class HumanA {
private:
	Weapon&			weapon;
	std::string		name;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack();
};

#endif