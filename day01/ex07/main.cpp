/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:51:24 by dborysen          #+#    #+#             */
/*   Updated: 2018/05/21 15:51:24 by dborysen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "replace.hpp"

int main(void)
{
	std::string filename;
	std::string	new_file;
	std::string s1;
	std::string s2;
	std::string buffer;

	save_strings(filename, s1, s2);
	new_file = filename + ".replace";
	std::ifstream ifs(filename);
	if (ifs.is_open() == 0)
	{
		std::cout << "Error open file" << std::endl;
		return (0);
	}
	std::ofstream ofs;
	ofs.open(new_file, std::ofstream::app);
	while (ifs.eof() == 0)
	{
		buffer = "";
		getline(ifs, buffer);
		if (buffer == s1)
			ofs << s2 + '\n';
		else
			ofs << buffer + '\n';
	}
	ofs.close();
	ifs.close();
	return (0);
}

void	save_strings(std::string &filename, std::string &s1, std::string &s2)
{
	std::cout << "Please enter file name: ";
	std::getline(std::cin, filename);
	std::cout << "Please enter first string: ";
	std::getline(std::cin, s1);
	std::cout << "Please enter second string: ";
	std::getline(std::cin, s2);
}
