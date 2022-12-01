/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 03:06:33 by mraspors          #+#    #+#             */
/*   Updated: 2022/11/30 21:14:18 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
{
	this->index = -1;
    return ;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::printContactTableHeader()
{
	std::cout << "┏==========┳==========┳==========┳==========┓" << std::endl;
	std::cout << "┃     index┃first name┃ last name┃  nickname┃" << std::endl;
	std::cout << "┣==========╋==========╋==========╋==========┫" << std::endl;
}

std::string PhoneBook::setContactWidth(std::string field) {
	if (field.length() > 10) {
		field = field.substr(0, 9);
		field.append(".");
	}
	return (field);
}

void	PhoneBook::printContactTable()
{
	int			size;
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;

	if (this->index > 7)
		size = 7;
	else
		size = this->index;
	PhoneBook::printContactTableHeader();
	for (int i = 0; i <= size % 8; i++)
	{
		firstName = setContactWidth(PhoneBook::contact[i].getFirstName());
		lastName = setContactWidth(PhoneBook::contact[i].getLastName());
		nickname = setContactWidth(PhoneBook::contact[i].getNickname());
		std::cout << "┃" 
		<< std::setfill(' ') << std::setw(10) << i << "┃"
		<< std::setfill(' ') << std::setw(10) << firstName << "┃"
		<< std::setfill(' ') << std::setw(10) << lastName << "┃"
		<< std::setfill(' ') << std::setw(10) << nickname << "┃"
		<< std::endl;
		if (i < size)
			std::cout << "┣==========╋==========╋==========╋==========┫" << std::endl;
	}
	std::cout << "┗==========┻==========┻==========┻==========┛" << std::endl;
}

void	PhoneBook::printContact(int index)
{
	std::cout << std::endl;
	std::cout << "┌=============================================" << std::endl;
	std::cout << "┃First name    : " << PhoneBook::contact[index].getFirstName() << std::endl;
	std::cout << "┃Last name     : " << PhoneBook::contact[index].getLastName() << std::endl;
	std::cout << "┃Nick name     : " << PhoneBook::contact[index].getNickname() << std::endl;
	std::cout << "┃Phone number  : " << PhoneBook::contact[index].getPhoneNumber() << std::endl;
	std::cout << "┃Darkest secret: " << PhoneBook::contact[index].getDarkestSecret() << std::endl;
	std::cout << "┗=============================================" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::addContact()
{
    std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	this->index++;
    std::cout << "Enter first name ▼" << std::endl;
	std::cout << "minishell > ";
	std::cin >> firstName;
	std::cout << "Enter last name ▼" << std::endl;
	std::cout << "minishell > ";
	std::cin >> lastName;
	std::cout << "Enter nickname ▼" << std::endl;
	std::cout << "minishell > ";
	std::cin >> nickname;
	std::cout << "Enter phone number ▼" << std::endl;
	std::cout << "minishell > ";
	std::cin >> phoneNumber;
	std::cout << "Enter darkest secret ▼" << std::endl;
	std::cout << "minishell > ";
	std::cin >> darkestSecret;

    PhoneBook::contact[this->index % 8].setFirstName(firstName);
    PhoneBook::contact[this->index % 8].setLastName(lastName);
    PhoneBook::contact[this->index % 8].setNickname(nickname);
    PhoneBook::contact[this->index % 8].setPhoneNumber(phoneNumber);
    PhoneBook::contact[this->index % 8].setDarkestSecret(darkestSecret);
	system("clear");
	std::cout << "CONTACT WAS ADDED" << std::endl;	
}


void	PhoneBook::searchContact()
{
	int	index = 0;
	int	size  = 0;
	std::string input;
	
	if (this->index >= 7)
		size = 7;
	else
		size = this->index;

	if (this->index == -1)
	{
		system("clear");
		std::cout << "EMPTY" << std::endl;
		return;
	}
	PhoneBook::printContactTable();

	std::cout << "Type contacts index" << std::endl;
	std::cout << "search > ";
	std::cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (isdigit(input[i]) == 0)
			return ;
	}
	if (index == 0)
		index = stoi(input);
	if (index < 0 || index > size)
	{
		std::cout << "incorrect input" << std::endl;
		return ;
	}
	printContact(index);
}