// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 14:46:25 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 14:46:26 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

void memoryLeak() 
{
	std::string*	panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}
