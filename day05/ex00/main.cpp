// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/18 13:11:26 by dborysen          #+#    #+#             //
//   Updated: 2018/06/18 13:11:27 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat newOne("John", 149);
		Bureaucrat anotherOne(newOne);
		anotherOne.decrementGrade();
		anotherOne.decrementGrade();
		std::cout << anotherOne << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	return (0);
}