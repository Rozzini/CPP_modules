/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:58:46 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:10:37 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string type;

public:
//Construcros/destructors assigning overloading
	    WrongAnimal();
	    WrongAnimal(const WrongAnimal& src);
	    WrongAnimal &operator=(const WrongAnimal &src);
virtual	~WrongAnimal();
//==============================================

//=================SET----GET===================
void			setType(std::string name);
std::string		getType() const;
//==============================================

//=================MEMBER-FUNCTIONS===============
void	makeSound() const;
//==============================================
};

#endif