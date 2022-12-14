/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:02:26 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/11 16:18:58 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"
class Form;

class Bureaucrat {
private:
	const std::string name;
	int			grade;

	Bureaucrat();
	
public:
//Construcros/destructors assigning overloading
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat &operator=(const Bureaucrat &src);
		~Bureaucrat();
//==============================================

//=================SET----GET===================
std::string		getName() const;
int				getGrade() const;
//==============================================

//=================MEMBER-FUNCTIONS===============
void			incrementGrade(int nb);
void			decrementGrade(int nb);
void			signForm(Form &form);
//==============================================

	class GradeTooHighException : public std::exception 
	{
	    public:
			const char * what () const throw ()
			{
				return "[Bureaucrat] Grade is too high";
			}
	};

	class GradeTooLowException : public std::exception 
	{
		public:
			const char * what () const throw ()
			{
				return "[Bureaucrat] Grade is too low";
			}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &src);
#endif