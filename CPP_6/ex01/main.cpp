/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:35:59 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/18 04:46:31 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(int argc, char **argv)
{
	Data *data = new Data;
	Data *deSerData;
	uintptr_t ser;

	data->str = "Updated: 2022/12/18 03:50:12 by mraspors";
	std::cout << "Original data     : " << data->str << std::endl;
	ser = serialize(data);
	std::cout << "Serialized data   : " << ser << std::endl;
	deSerData = deserialize(ser);
	std::cout << "Deseerialized data: " << deSerData->str << std::endl;
	delete data;
	return 0;
}
