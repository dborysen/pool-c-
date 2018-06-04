// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 15:41:54 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 15:41:55 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->_ZombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *firstOne = new Zombie;

	firstOne->name = name;
	firstOne->type = this->_ZombieType;
	return (firstOne);
}
