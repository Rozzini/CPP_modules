/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:26 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:09:59 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
protected:
	std::string type;

public:
//Construcros/destructors assigning overloading
		Animal();
		Animal(const Animal& src);
		Animal &operator=(const Animal &src);
virtual	~Animal();
//==============================================

//=================SET----GET===================
void			setType(std::string name);
std::string		getType() const;
//==============================================

//=================MEMBER-FUNCTIONS===============
virtual void	makeSound() const;
//==============================================
};

#endif