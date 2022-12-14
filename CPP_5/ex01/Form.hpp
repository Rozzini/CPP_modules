/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:28:08 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/11 17:18:55 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
private:
	const std::string	name;
	const int			signGrade;
	const int			execGrade;
	bool				signStatus;

	Form();
	
public:
//Construcros/destructors assigning overloading
		Form(const std::string &name, const int signGrade, const int execGrade);
		Form(const Form& src);
		Form &operator=(const Form &src);
		~Form();
//==============================================

//=================SET----GET===================
std::string		getName() const;
int				getSignGrade() const;
int				getSExecGrade() const;
bool			getSignStatus() const;
//==============================================

//=================MEMBER-FUNCTIONS===============
void			beSigned(Bureaucrat &src);
//================================================

	class GradeTooHighException : public std::exception 
	{
	    public:
			const char * what () const throw ()
			{
				return "[Form] Grade is too high";
			}
	};

	class GradeTooLowException : public std::exception 
	{
		public:
			const char * what () const throw ()
			{
				return "[Form] Grade is too low";
			}
	};
};

std::ostream& operator<<(std::ostream& os, const Form &src);
#endif