// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 14:39:56 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 14:39:57 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
{
	this->_name = "Plasma Rifle";
	this->_damage = 21;
	this->_apcost = 5;
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &other)
{
	*this = other;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
