/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 18:28:08 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/12 15:31:52 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;

class AForm {
private:
	const std::string	name;
	const int			signGrade;
	const int			execGrade;
	bool				signStatus;

	AForm();
	
public:
//Construcros/destructors assigning overloading
		AForm(const std::string &name, const int signGrade, const int execGrade);
		AForm(const AForm& src);
		AForm &operator=(const AForm &src);
virtual	~AForm();
//==============================================

//=================SET----GET===================
std::string		getName() const;
int				getSignGrade() const;
int				getSExecGrade() const;
bool			getSignStatus() const;
//==============================================

//=================MEMBER-FUNCTIONS===============
void			beSigned(Bureaucrat &src);
void			checkExec( const Bureaucrat &executor ) const;
virtual void	execute(Bureaucrat const & executor) const = 0;
//================================================

	class GradeTooHighException : public std::exception 
	{
	    public:
			const char * what () const throw ()
			{
				return "Grade is too high";
			}
	};

	class GradeTooLowException : public std::exception 
	{
		public:
			const char * what () const throw ()
			{
				return "Grade is too low";
			}
	};

	class CantExecuteForm: public std::exception 
	{
		public:
			const char * what () const throw ()
			{
				return "cant execute, form not signed or grade is to low";
			}
	};
};

std::ostream& operator<<(std::ostream& os, const AForm &src);
#endif