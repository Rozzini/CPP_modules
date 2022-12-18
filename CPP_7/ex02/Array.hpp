/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:57:35 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 05:48:17 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T> class Array {
private:
	T	*array;
	int	_size;

public:
	Array<T>()
	{
		this->array = NULL;
		this->_size = 0;
		std::cout << "Default contructor called" << std::endl;
		return ;
	}

	Array<T>(unsigned int n)
	{
		this->_size = n;
		this->array = new T[_size];
		std::cout << "Contructor called" << std::endl;
		return ;
	}

	Array<T>(const Array<T> &src)
	{
		std::cout << "Copy contructor called" << std::endl;
		*this = src;
		return ;
	}

	Array<T> &operator=(const Array<T> &src)
	{
		std::cout << "Assigment called" << std::endl;
		this->_size = src.size();
		this->array = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
			this->array[i] = src.array[i];
		return *this;
	}

	~Array<T>()
	{
		std::cout << "Destructor called" << std::endl;
		if (this->_size > 0)
			delete [] this->array;
	}

	T		&operator[](const int i) const
	{
		if (i >= this->_size || i < 0)
			throw std::overflow_error("index is out of bounds");
		return this->array[i];
	}
	
	int		size() const 
	{
		return (this->_size);
	}
};

#endif