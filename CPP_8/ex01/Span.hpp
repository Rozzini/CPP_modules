/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 03:24:21 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/19 05:18:20 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <cstdlib>
# include <iostream>
# include <time.h>
# include <vector>
# include <algorithm>

class Span {
private:
	std::vector<int>	container;
	unsigned int		size;
	unsigned int		filling;

	Span();
	void	putNumber(int n);
	void	checkSpanErr();
public:
//Construcros/destructors assigning overloading
		Span(unsigned int size);
		Span(const Span& src);
		Span &operator=(const Span &src);
		~Span();
//==============================================

//=================SET----GET===================
unsigned int		getSize() const;
unsigned int		getFreeSapce() const;
std::vector<int>	getContainer() const;
//==============================================

//=================MEMBER-FUNCTIONS===============
void			addNumber(int num);
void			fillRand();
int				shortestSpan();
int				longestSpan();
//==============================================

	class FilledException : public std::exception 
	{
	    public:
			const char * what () const throw ()
			{
				return "Span is full already";
			}
	};

	class LessTwoException : public std::exception 
	{
	    public:
			const char * what () const throw ()
			{
				return "there is less than 2 elements";
			}
	};
};

std::ostream	&operator<<( std::ostream &o, const Span &src );

#endif