// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 14:40:10 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 14:40:11 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PowerFist.hpp"

PowerFist::PowerFist(void)
{
	this->_name = "Power Fist";
	this->_damage = 50;
	this->_apcost = 8;
	return ;
}

PowerFist::PowerFist(PowerFist &other)
{
	*this = other;
	return ;
}

PowerFist::~PowerFist()
{
	return ;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
