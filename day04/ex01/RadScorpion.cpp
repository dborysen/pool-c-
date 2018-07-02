// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 16:37:00 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 16:37:01 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
{
	this->_hp = 80;
	this->_type = "RadScorpion";
	this->_deathWords = "* SPROTCH *";
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(const RadScorpion &other)
{
	*this = other;
	return ;
}

RadScorpion::~RadScorpion()
{
	return ;
}
