// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 14:39:25 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 14:39:26 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	this->_name = "";
	this->_apcost = 0;
	this->_damage = 0;
    return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
	return ;
}

AWeapon::AWeapon(AWeapon &other)
{
	*this = other;
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

std::string		AWeapon::getName() const
{
	return (this->_name);
}

int				AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int				AWeapon::getDamage() const
{
	return (this->_damage);
}

AWeapon	& AWeapon::operator = (const AWeapon &other)
{
	this->_name = other.getName();
	this->_apcost = other.getAPCost();
	this->_damage = other.getDamage();
	return (*this);
}
