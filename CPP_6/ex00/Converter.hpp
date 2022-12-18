/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:57:35 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 03:32:21 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Converter {
private:
	std::string input;
	bool		floatPseudo;
	bool		doublPseudo;
	bool		isChar;
	bool		isInt;
	bool		isDouble;
	bool		isFloat;
	int			type;
	char		c;
	int			num;
	float		floty;
	double		dub;
	int			impos;
	Converter();
	
public:
//Construcros/destructors assigning overloading
		Converter(char *input);
		Converter(const Converter& src);
		Converter &operator=(const Converter &src);
		~Converter();
//==============================================

//=================SET----GET===================
	std::string		getInput();
//==============================================

//=================MEMBER-FUNCTIONS===============
private:
	void			printChar(int type);
	void			printInt(int type);
	void			printFloat(int type);
	void			printDouble(int type);
	bool			checkSpecial();
	bool			checkValididty();
	void			checkInput();
	void			checkTypeValidity();
	void			pickType();
	void			convertToType(int type);
	void			printIfSpecial(int type);

public:
	void			printResult();
//================================================
};

#endif