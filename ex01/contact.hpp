/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:02:30 by dpalmer           #+#    #+#             */
/*   Updated: 2023/06/09 12:14:53 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	public:
		static Contact	createNewContact(void);
		bool			check_valid(void) const;
		void			showContact(void) const;
		std::string		getFirstName(void) const;
		std::string		getLastName(void) const;
		std::string		getNickName(void) const;
		std::string		get_secret(void) const;
		std::string		get_number(void) const;

	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nick_name;
		std::string		phone_number;
		std::string		darkest_secret;
};

#endif
