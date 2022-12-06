/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:13:57 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/06 15:26:33 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>


class ClapTrap {
private:
	std::string			name;
	int					HP;
	int					EP;
	int					AD;

public:
//Construcros/destructors assigning overloading
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	ClapTrap operator=(const ClapTrap &og);
	~ClapTrap();
//==============================================

//=================SET----GET===================
void			setName(std::string name);
void			setHP(int hp);
void			setEP(int ep);
void			setAD(int ad);
std::string		getName();
int				getHP();
int				getEP();
int				getAD();
//==============================================

//=================MEMBER-FUNCTIONS===============
void attack(const std::string& target);
void beRepaired(unsigned int amount);
void takeDamage(unsigned int amount);
//==============================================
};

#endif