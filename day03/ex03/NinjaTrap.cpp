// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/25 17:41:51 by dborysen          #+#    #+#             //
//   Updated: 2018/05/25 17:41:51 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_maleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_name = "";
	std::cout << "NinjaTrap constructor has been called" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_maleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_name = name;
	std::cout << "NinjaTrap constructor has been called" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other)
{
	*this = other;
	std::cout << "Hey enother karate kid!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor has been called" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoebox(FragTrap &obj, const std::string & target)
{
	obj.vaulthunter_dot_exe(target);
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &obj, const std::string & target)
{
	obj.challengeNewcomer(target);
	return ;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &obj, const std::string & target)
{
	obj.ninjaAttack(target);
	return ;
}

void	NinjaTrap::ninjaAttack(std::string target)
{
	std::cout << "Ninja attack " << target << " in eagle style KEEEEEEYAAAAA !" << std::endl;
	return ;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &other)
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

	std::cout << "NinjaTrap assignation operator is in use !" << std::endl;
	return (*this);
}
