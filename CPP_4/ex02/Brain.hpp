/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:25:37 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/09 17:20:15 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {

private:
    std::string     ideas[100];

public:
//Construcros/destructors assigning overloading
	Brain();
	Brain(const Brain& src);
	Brain &operator=(const Brain &src);
	~Brain();
//==============================================

//==================set-get=====================
void            setIdea(int i, std::string idea);
std::string     getIdea(int i);
//==============================================
};

#endif