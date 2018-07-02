// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/14 13:32:51 by dborysen          #+#    #+#             //
//   Updated: 2018/05/14 13:32:52 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.class.hpp"

int		main(void)
{
	int			i;
	std::string	str;
	PhoneBook	arr[8];

	i = 0;
	while (strcmp(str.c_str(), "EXIT") != 0)
	{
		std::cout << "Please enter desired option: ";
		std::getline(std::cin, str);
		if (str.length() == 0)
			break ;
		if (strcmp(str.c_str(), "ADD") == 0 && i < 8)
		{
			arr[i].add_information();
			if (arr[i].is_contact_not_empty() == TRUE)
				i++;
			else
				arr[i].delete_contact();
		}
		else if (strcmp(str.c_str(), "ADD") == 0 && i == 8)
			std::cout << "ERROR: phone book is full"<< std::endl;
		else if (strcmp(str.c_str(), "SEARCH") == 0)
		{
			if (i > 0)
			{
				std::cout << std::endl;
				for (int j = 0; j < i; j++)
					arr[j].show_contacts(j);
				std::cout << std::endl;
				std::cout << "Chose id: ";
				std::getline(std::cin, str);
				if (atoi(str.c_str()) < i && is_a_num(str.c_str()) == TRUE)
					arr[atoi(str.c_str())].show_user_info();
				else
					std::cout << "ERROR: there is no such contact" << std::endl;
			}
			else
				std::cout << "ERROR: phone book is empty"<< std::endl;
		}
	}
	return (0);
}

int		is_a_num(const char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]) != 0)
			return (FALSE);
	}
	return (TRUE);
}