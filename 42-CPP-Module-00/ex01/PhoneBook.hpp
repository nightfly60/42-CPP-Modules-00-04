/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:51:18 by edurance          #+#    #+#             */
/*   Updated: 2025/11/07 14:47:14 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstdlib>
# include <iostream>
# include <string>

std::string	PhoneBookTruncate(std::string data);

class	PhoneBook
{
	private:
		Contact _contacts[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);

		int		AddContact(int count);
		int		AddFirstName(Contact *contact);
		int		AddLastName(Contact *contact);
		int		AddNickname(Contact *contact);
		int		AddPhoneNumber(Contact *contact);
		int		AddDarkestSecret(Contact *contact);

		void		DisplayInformations(int count);
		void		DisplayInformationsID(int id);
};

#endif
