/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:26:17 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:12:53 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

private:
	Brain* brain;

public:
//Construcros/destructors assigning overloading
	Cat();
	Cat(const Cat& src);
	Cat &operator=(const Cat &src);
	~Cat();
//==============================================

//=================MEMBER-FUNCTIONS===============
void	makeSound() const;
Brain*	useBrain() const;
//==============================================
};

#endif