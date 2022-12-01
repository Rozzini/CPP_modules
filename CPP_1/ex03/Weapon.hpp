/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 03:43:59 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 03:44:00 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
private:
	std::string		type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

    std::string getType();
	void setType(std::string type);
};

#endif