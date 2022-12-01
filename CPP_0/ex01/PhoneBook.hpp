/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 03:06:26 by mraspors          #+#    #+#             */
/*   Updated: 2022/11/29 03:22:59 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
private:
	Contact contact[8];
	int		index;

private:
	void printContactTableHeader();
	void printContactTable();
	void printContact(int index);
	std::string setContactWidth(std::string field);
public:
	PhoneBook();
	~PhoneBook();

	void	addContact();
	void	searchContact();
};

#endif