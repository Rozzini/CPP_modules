/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:57 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/13 20:30:21 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm{
private:
    std::string   target; 

	RobotomyRequestForm();
    
public:
//Construcros/destructors assigning overloading
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm& src);
		RobotomyRequestForm &operator=(RobotomyRequestForm &src);
		~RobotomyRequestForm();
//==============================================

//=================SET----GET===================
std::string     getTarget();
//==============================================

//=================MEMBER-FUNCTIONS===============
virtual void        execute(Bureaucrat const & executor) const;
//================================================

};

#endif

// • RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.