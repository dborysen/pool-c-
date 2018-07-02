// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/18 16:17:43 by dborysen          #+#    #+#             //
//   Updated: 2018/05/18 16:17:44 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->humanbWeapon->type << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon_value)
{
	this->humanbWeapon = &weapon_value;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}
