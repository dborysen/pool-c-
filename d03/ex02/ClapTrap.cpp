// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/25 15:52:59 by dborysen          #+#    #+#             //
//   Updated: 2018/05/25 15:52:59 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor has been called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "Hey! look at me! Do like me!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor has been called" << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " melee attacking " <<
	target << " causing " << this->_maleeAttackDamage <<" points of damage !" << std::endl;
	return ;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " ranged attacking " <<
	target << " causing " << this->_rangedAttackDamage <<" points of damage !" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	this->_armorDamageReduction = other._armorDamageReduction;
	this->_energyPoints = other._energyPoints;
	this->_hitPoints = other._hitPoints;
	this->_level = other._level;
	this->_maleeAttackDamage = other._maleeAttackDamage;
	this->_maxEnergyPoints = other._maxEnergyPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_name = other._name;
	this->_rangedAttackDamage = other._rangedAttackDamage;

	std::cout << "ClapTrap assignation operator is in use !" << std::endl;
	return (*this);
}
