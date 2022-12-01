/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 03:06:36 by mraspors          #+#    #+#             */
/*   Updated: 2022/11/30 21:17:37 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_help()
{
	std::cout << "type ADD to save a new contact" << std::endl;
	std::cout << "type SEARCH to display a specific contact" << std::endl;
	std::cout << "type EXIT to EXIT" << std::endl;
	std::cout << "type HELP to see this message again" << std::endl;
}

int		main()
{
    PhoneBook phoneBook;
    std::string input;

    std::cout << "<<==========WELCOME TO MINISHELL==========>>" << std::endl;
	print_help();
	
    while (1)
    {
		std::cout << "minishell > ";
        std::cin >> input;
		if (input == "EXIT" || std::cin.eof())
			return (0);
		else if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input == "HELP")
			print_help();
		else
			 std::cout << "Incorrect input" << std::endl;
    }
    return (0);
}