// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/28 10:55:01 by dborysen          #+#    #+#             //
//   Updated: 2018/05/28 10:55:02 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer	robert("Robert", "the Magnificent");
	Victim		jim("Jimmy");
	Peon		joe("Joe");
	Victim		Jack(joe);
	
	std::cout << std::endl;
	std::cout << Jack;

	std::cout << std::endl;
	std::cout << robert << jim << joe;	

	std::cout << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
}
