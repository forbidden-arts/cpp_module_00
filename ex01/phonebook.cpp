/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:31:22 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/09 12:33:15 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include "inpututils.hpp"
#include "contact.hpp"
#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
};

void	PhoneBook::selectOption(void)
{
	std::string input;

	while (true)
	{
		std::cout	<< std::endl
					<< "\033[31mADD\e[0m\t\tnew contact." << std::endl
					<< "\033[31mSEARCH\e[0m\t\tfor contact." << std::endl
					<< "\033[31mEXIT\e[0m\t\tthe super-awesome PhoneBook." << std::endl
					<< "> ";
		readInput(input);
		if (!input.compare("ADD"))
			this->addContact();
		else if (!input.compare("SEARCH"))
			this->findContact();
		else if (!input.compare("EXIT"))
			break;
		else
			std::cout << "\nInvalid choice.\n" << std::endl;
	}
	std::cout << "Goodbye." << std::endl;
}

void	PhoneBook::addContact(void)
{
	const Contact contact = Contact::createNewContact();
	
	if (!contact.check_valid())
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
	contacts[index++] = contact;
	index %= MAX_CONTACTS;
}

void	PhoneBook::findContact(void)
{
	int 		width = 10;
	int			index;
	std::string	input;

	preview("Index", "First", "Last", "Nickname", width);
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
		preview(
			std::to_string(i),
			contacts[i].getFirstName(),
			contacts[i].getLastName(),
			contacts[i].getNickName(),
			width);
	std::cout << "Select Index: ";
	readInput(input);
	index = garbageAtoi(input);
	if (index < 0 || index > MAX_CONTACTS)
	{
		std::cout << "Out of range." << std::endl;
		return; 
	}
	contacts[index].showContact();
}
