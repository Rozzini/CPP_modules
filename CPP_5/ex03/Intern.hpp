/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:04:44 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 22:23:27 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern {

public:
//Construcros/destructors assigning overloading
	Intern();
	Intern(const Intern &src );
	Intern	&operator=(const Intern &src);
	~Intern();
//==============================================

//=================MEMBER-FUNCTIONS===============
AForm	*makeForm(const std::string &formName, const std::string &target) const;
//==============================================
};

#endif
