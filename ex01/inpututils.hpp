/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inpututils.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:37:53 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/09 12:29:19 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUTUTILS_HPP
#define INPUTUTILS_HPP

#include <iostream>

void		readInput(std::string &buffer);
std::string	trunc(std::string str, int width);
void		preview(
				std::string index,
				std::string first,
				std::string last,
				std::string nick,
				int width);
int			garbageAtoi(std::string str);

#endif