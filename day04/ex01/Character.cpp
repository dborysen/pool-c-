// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 17:14:12 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 17:14:19 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character(void) : _AP(0), _weapon(NULL), _name("") 
{
	return ;
}

Character::Character(std::string const & name) : _AP(40), _weapon(NULL), _name(name) 
{
	return ;
}

Character::Character(const Character &other)
{
	*this = other;
	return ;
}

Character::~Character()
{
	return ;
}

const std::string	&Character::getName() const
{
	return (this->_name);
}

const int			&Character::getAP() const
{
	return (this->_AP);
}

const std::string	Character::getWeaponName() const
{
	if (this->_weapon != NULL)
		return (this->_weapon->getName());
	return ("");
}

void				Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
	return ;
}

void				Character::recoverAP()
{
	if (this->_AP + 10 >= 40)
		this->_AP = 40;
	else
		this->_AP += 10;
}

void				Character::attack(Enemy *enemy)
{
	if (_weapon != NULL && this->getAP() >= this->_weapon->getAPCost())
	{
		std::cout << this->getName() << " attacks " << enemy->getType()
		<< " with a " << this->_weapon->getName() << std::endl;
		this->_AP -= this->_weapon->getAPCost();
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		if (enemy->getHP() <= 0)
		{
			std::cout << enemy->getDeathWords() << std::endl;
			delete enemy;
		}
	}
	return ;
}

std::ostream &operator << (std::ostream &o, const Character &rhs)
{
	if (rhs.getWeaponName() != "")
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeaponName()
		<< std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	return o;
}

Character    &Character::operator = (const Character &other)
{
	this->_AP = other.getAP();
	this->_name = other.getName();
	return (*this);
}

