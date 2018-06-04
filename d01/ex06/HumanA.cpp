// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/18 16:17:24 by dborysen          #+#    #+#             //
//   Updated: 2018/05/18 16:17:25 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->humanaWeapon.type <<std::endl;
}

HumanA::HumanA(std::string name_value, Weapon &weapon_value) : humanaWeapon(weapon_value)
{
	this->name = name_value;
}

HumanA::~HumanA(void)
{
	return ;
}
