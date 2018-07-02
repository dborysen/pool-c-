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

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat newOne("John", 41);
		Bureaucrat anotherOne(newOne);
	
		Form newForm("29-C", 50, 40);
		Form anotherForm("31-B", 20, 1);

		newForm.beSigned(anotherOne);
		anotherForm.beSigned(anotherOne);

		std::cout << anotherForm << std::endl;
		std::cout << newForm << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	return (0);
}
