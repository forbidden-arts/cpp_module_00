/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:31:22 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/08 13:58:23 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
};

PhoneBook::~PhoneBook(void){};

void	PhoneBook::Select(void)
{
	std::string input;

	while (1)
	{
		std::cout << "\"ADD\"\t\tnew contact." << std::endl;
		std::cout << "\"SEARCH\"\tfor contact." << std::endl;
		std::cout << "\"EXIT\"\t\tthe super-awesome PhoneBook." << std::endl;
		getline(std::cin, input, '\n');
		if (input.compare("ADD") == 0)
			this->newContact();
		else if (input.compare("SEARCH") == 0)
			this->findContact();
		else if (input.compare("EXIT") == 0 || std::cin.eof())
			break;
		else
			std::cout << "Invalid choice.\n\n" << std::endl;
	}

}

void	PhoneBook::addContact(Contact contact)
{
	this->contacts[index++] = contact;
	index %= 8;
}

void	PhoneBook::newContact(void);
void	PhoneBook::findContact(void);
