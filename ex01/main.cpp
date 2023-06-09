/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:37:22 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/09 11:41:23 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

void	phonebook_intro (void)
{
	std::cout
	<< "\033[33m******************************************" << std::endl
	<< "*                                        *" << std::endl
	<< "* Welcome to the super-awesome PhoneBook *" << std::endl
	<< "*      What do you want to do next?      *" << std::endl
	<< "*                                        *" << std::endl
	<< "******************************************\e[0m" << std::endl;
}

int	main(void)
{
	PhoneBook	phonebook;

	phonebook_intro();
	phonebook.selectOption();
	return (0);
}
