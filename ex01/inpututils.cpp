/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inpututils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:40:11 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/09 12:32:57 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "inpututils.hpp"

void	readInput(std::string &buffer)
{
	std::getline(std::cin, buffer);
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
}

std::string	trunc(std::string str, int width)
{
	if (str.length() > width)
		return (str.substr(0, width - 1) + ".");
	return (str);
}

void	preview(
	std::string index,
	std::string first,
	std::string last,
	std::string nick,
	int width)
{
	std::cout << std::setw(width) << std::right << index << '|'
		<< std::setw(width) << std::right << trunc(first, width) << '|'
		<< std::setw(width) << std::right << trunc(last, width) << '|'
		<< std::setw(width) << std::right << trunc(nick, width) << std::endl;
}

int	garbageAtoi(std::string str)
{
	switch (str[0])
	{
	case '0':
		return (0);
	case '1':
		return (1);
	case '2':
		return (2);
	case '3':
		return (3);
	case '4':
		return (4);
	case '5':
		return (5);
	case '6':
		return (6);
	case '7':
		return (7);
	default:
		return (-1);
	}
}