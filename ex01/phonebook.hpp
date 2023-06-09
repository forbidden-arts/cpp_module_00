/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:30:33 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/09 11:29:23 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
	public:
		PhoneBook();
		void	selectOption(void);

	private:
		int		index;
		void	newContact(void);
		void	findContact(void);
		void	showContact(int index);
		void	addContact(void);
		Contact	contacts[MAX_CONTACTS];
};
#endif
