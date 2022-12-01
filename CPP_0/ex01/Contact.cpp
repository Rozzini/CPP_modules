/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 03:02:33 by mraspors          #+#    #+#             */
/*   Updated: 2022/11/28 04:05:06 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact () {}

Contact::~Contact () {}

std::string Contact::getFirstName()
{
    return FirstName;
}

std::string Contact::getLastName()
{
    return LastName;
}

std::string Contact::getNickname()
{
    return Nickname;
}

std::string Contact::getPhoneNumber()
{
    return PhoneNumber;
}

std::string Contact::getDarkestSecret()
{
    return DarkestSecret;
}

void Contact::setFirstName(std::string firstName)
{
    FirstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    LastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    Nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    PhoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    DarkestSecret = darkestSecret;
}