// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/14 15:22:59 by dborysen          #+#    #+#             //
//   Updated: 2018/05/14 15:23:00 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# define TRUE 0
# define FALSE -1

#include <iostream>
#include <iomanip>

class PhoneBook {

public:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;

	void		add_information(void);
	void		show_contacts(int id);
	void		show_user_info(void);
	int			is_contact_not_empty(void);
	void		delete_contact(void);
};

int		is_a_num(const char *str);

#endif
