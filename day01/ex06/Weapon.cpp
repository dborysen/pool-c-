// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/18 16:17:07 by dborysen          #+#    #+#             //
//   Updated: 2018/05/18 16:17:08 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

void Weapon::setType(std::string value)
{
	this->type = value;
}

std::string const	&Weapon::getType(void)
{
	return (this->type);
}

Weapon::Weapon(std::string type) 
{
	this->setType(type);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}