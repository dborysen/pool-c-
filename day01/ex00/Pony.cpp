// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 13:13:45 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 13:13:45 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

std::string Pony::breed = "Royal";
std::string Pony::weight = "454 kg";
std::string Pony::color = "Pink obv";
std::string Pony::magicAbility = "Take a shit by rainbow";

Pony::Pony()
{
	std::cout << std::endl << "Pony was Born!" << std::endl;
	return ;
}

Pony::~Pony()
{
	std::cout << "Pony is dead" << std::endl << std::endl;
	return ;
}

void	ponyOnTheHeap(void)
{
	Pony*	Endy = new Pony();

	std::cout << "Pony on the heap" 	<< std::endl;
	std::cout << "Endys breed:        " << Endy->breed << std::endl;
	std::cout << "Endys color:        " << Endy->color << std::endl;
	std::cout << "Endys magicAbility: " << Endy->magicAbility << std::endl;
	std::cout << "Endys weight:       " << Endy->weight << std::endl;
	delete Endy;
}

void	ponyOnTheStack(void)
{
	Pony	Joseph = Pony();

	std::cout << "Pony on the stack" 	  << std::endl;
	std::cout << "Josephs breed:        " << Joseph.breed << std::endl;
	std::cout << "Josephs color:        " << Joseph.color << std::endl;
	std::cout << "Josephs magicAbility: " << Joseph.magicAbility << std::endl;
	std::cout << "Josephs weight:       " << Joseph.weight << std::endl;
}