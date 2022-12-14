/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:22:14 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 20:30:24 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm{
private:
    std::string   target; 
	
    PresidentialPardonForm();

public:
//Construcros/destructors assigning overloading
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(PresidentialPardonForm& src);
		PresidentialPardonForm &operator=(PresidentialPardonForm &src);
		~PresidentialPardonForm();
//==============================================

//=================SET----GET===================
std::string     getTarget();
//==============================================

//=================MEMBER-FUNCTIONS===============
virtual void        execute(Bureaucrat const & executor) const;
//================================================

};

#endif

// • PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox