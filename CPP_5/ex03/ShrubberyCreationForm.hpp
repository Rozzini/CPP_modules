/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:41 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 20:30:11 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
private:
    std::string   target;

	ShrubberyCreationForm();

public:
//Construcros/destructors assigning overloading
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(ShrubberyCreationForm& src);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm &src);
		~ShrubberyCreationForm();
//==============================================

//=================SET----GET===================
std::string     getTarget();
//==============================================

//=================MEMBER-FUNCTIONS===============
virtual void        execute(Bureaucrat const & executor) const;
//================================================

};

#endif

// • ShrubberyCreationForm: Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.