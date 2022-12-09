/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:59:19 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:10:47 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
//Construcros/destructors assigning overloading
	WrongCat();
	WrongCat(const WrongCat& src);
	WrongCat &operator=(const WrongCat &src);
	~WrongCat();
//==============================================

//=================MEMBER-FUNCTIONS===============
void	makeSound() const;
//==============================================
};

#endif