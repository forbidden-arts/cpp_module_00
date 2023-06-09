/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:13:09 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/09 12:34:48 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "inpututils.hpp"
#include "contact.hpp"

Contact	Contact::createNewContact(void)
{
	Contact newContract;

	std::cout << "Enter First Name: " << std::flush;
	readInput(newContract.first_name);
	std::cout << "Enter Last Name: ";
	readInput(newContract.last_name);
	std::cout << "Enter Nickname: ";
	readInput(newContract.nick_name);
	std::cout << "Enter Phone Number: ";
	readInput(newContract.phone_number);
	std::cout << "Reveal Darkest Secret: ";
	readInput(newContract.darkest_secret);
	return (newContract);
}

bool	Contact::check_valid(void) const
{
	return (!(
		first_name.empty() ||
		last_name.empty() ||
		nick_name.empty() ||
		phone_number.empty() ||
		darkest_secret.empty()
		));
}

void	Contact::showContact(void) const
{
	if (first_name.empty())
		return;
	std::cout << "\nFirst Name:\t" << first_name << std::endl
			<< "Last Name:\t" << last_name << std::endl
			<< "Nickname:\t" << nick_name << std::endl
			<< "Phone Number:\t" << phone_number << std::endl
			<< "Darkest Secret:\t" << darkest_secret << std::endl;
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
