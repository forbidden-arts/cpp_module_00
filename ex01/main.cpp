/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:37:22 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/08 13:55:22 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

void	phonebook_intro (void)
{
	std::cout
	<< "******************************************" << std::endl
	<< "*                                        *" << std::endl
	<< "* Welcome to the super-awesome PhoneBook *" << std::endl
	<< "*      What do you want to do next?      *" << std::endl
	<< "*                                        *" << std::endl
	<< "******************************************" << std::endl;
}

int	main(void)
{
	PhoneBook	phonebook;

	phonebook_intro();
	phonebook.Select();
	return (0);
}
