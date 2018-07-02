// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 16:36:43 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 16:36:44 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
	this->_hp = 170;
	this->_type = "Super Mutant";
	this->_deathWords = "Aaargh ...";
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant &other)
{
	*this = other;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

void	SuperMutant::takeDamage(int damage)
{
	if (this->_hp - damage / 3 <= 0)
		this->_hp = 0;
	else
		this->_hp -= damage;
	return ;
}
