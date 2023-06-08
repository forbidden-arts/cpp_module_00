/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:13:09 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/08 13:21:41 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"

Contact::Contact(void){};
Contact::~Contact(void){};

void	Contact::set_values(
	std::string first_name,
	std::string last_name,
	std::string nick_name,
	std::string phone_number,
	std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

std::string	Contact::getFirstName(void) const
{
	return (first_name);
}

std::string	Contact::getLastName(void) const
{
	return (last_name);
}

std::string	Contact::getNickName(void) const
{
	return (nick_name);
}

std::string	Contact::get_number(void) const
{
	return (phone_number);
}

std::string	Contact::get_secret(void) const
{
	return (darkest_secret);
}
