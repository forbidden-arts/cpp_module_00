/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:08:12 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/06 11:18:29 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int index = 1; index < argc; index++)
		{
			std::string str = argv[index];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
		}
	}
	std::cout << std::endl;
	return (0);
}
