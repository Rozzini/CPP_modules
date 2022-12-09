/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:26:05 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:13:01 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

private:
	Brain* brain;

public:
//Construcros/destructors assigning overloading
	Dog();
	Dog(const Dog& src);
	Dog &operator=(const Dog &src);
	~Dog();
//==============================================

//=================MEMBER-FUNCTIONS===============
void	makeSound() const;
Brain*	useBrain() const;
//==============================================
};

#endif