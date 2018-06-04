// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.class.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/14 16:12:02 by dborysen          #+#    #+#             //
//   Updated: 2018/05/14 16:12:03 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.class.hpp"

void		PhoneBook::add_information(void) {
	
	std::string str;
	PhoneBook	newContact;

	std::cout << "first name: ";
	std::getline(std::cin, str);
	this->first_name = str;

	std::cout << "last name: ";
	std::getline(std::cin, str);
	this->last_name = str;

	std::cout << "nickname: ";
	std::getline(std::cin, str);
	this->nickname = str;

	std::cout << "login: ";
	std::getline(std::cin, str);
	this->login = str;

	std::cout << "postal address: ";
	std::getline(std::cin, str);
	this->postal_address = str;

	std::cout << "email address: ";
	std::getline(std::cin, str);
	this->email_address = str;

	std::cout << "phone number: ";
	std::getline(std::cin, str);
	this->phone_number = str;

	std::cout << "birthday date: ";
	std::getline(std::cin, str);
	this->birthday_date = str;

	std::cout << "favorite meal: ";
	std::getline(std::cin, str);
	this->favorite_meal = str;

	std::cout << "underwear color: ";
	std::getline(std::cin, str);
	this->underwear_color = str;

	std::cout << "darkest secret: ";
	std::getline(std::cin, str);
	this->darkest_secret = str;

	return ;
}

void		PhoneBook::show_contacts(int id) {
	if (this->first_name.length() > 10)
	{
		this->first_name.resize(9);
		this->first_name.insert(9, 1, '.');
	}
	if (this->last_name.length() > 10)
	{
		this->last_name.resize(9);
		this->last_name.insert(9, 1, '.');
	}
	if (this->nickname.length() > 10)
	{
		this->nickname.resize(9);
		this->nickname.insert(9, 1, '.');
	}
	std::cout << std::setw(10) << id << '|';
	std::cout << std::setw(10) << this->first_name << '|';
	std::cout << std::setw(10) << this->last_name << '|';
	std::cout << std::setw(10) << this->nickname << std::endl;
}

void		PhoneBook::show_user_info(void) {
	std::cout << std::endl;
	std::cout << std::setw(17) << "first name: " << this->first_name << std::endl;
	std::cout << std::setw(17) << "last name: " << this->last_name << std::endl;
	std::cout << std::setw(17) << "nickname: " << this->nickname << std::endl;
	std::cout << std::setw(17) << "login: " << this->login << std::endl;
	std::cout << std::setw(17) << "postal address: " << this->postal_address << std::endl;
	std::cout << std::setw(17) << "email address: " << this->email_address << std::endl;
	std::cout << std::setw(17) << "phone number: " << this->phone_number << std::endl;
	std::cout << std::setw(17) << "birthday date: " << this->birthday_date << std::endl;
	std::cout << std::setw(17) << "favorite meal: " << this->favorite_meal << std::endl;
	std::cout << std::setw(17) << "underwear color: " << this->underwear_color << std::endl;
	std::cout << std::setw(17) << "darkest secret: " << this->darkest_secret << std::endl;
	std::cout << std::endl;
}

int			PhoneBook::is_contact_not_empty(void) {
	if (this->first_name.empty() == false &&
		this->last_name.empty() == false &&
		this->nickname.empty() == false)
		return (TRUE);
	return (FALSE);
}

void		PhoneBook::delete_contact(void) {
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->login = "";
	this->postal_address = "";
	this->email_address = "";
	this->phone_number = "";
	this->birthday_date = "";
	this->favorite_meal = "";
	this->underwear_color = "";
	this->darkest_secret = "";
}

