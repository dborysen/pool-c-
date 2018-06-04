// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/24 15:12:30 by dborysen          #+#    #+#             //
//   Updated: 2018/05/24 15:12:30 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) :				_hitPoints(100),
										_maxHitPoints(100),
										_energyPoints(50),
										_maxEnergyPoints(50),
										_level(1),
										_maleeAttackDamage(20),
										_rangedAttackDamage(15),
										_armorDamageReduction(5),
										_name("")
{
	std::cout << "ScavTrap constructor has been called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) :	_hitPoints(100),
										_maxHitPoints(100),
										_energyPoints(50),
										_maxEnergyPoints(50),
										_level(1),
										_maleeAttackDamage(20),
										_rangedAttackDamage(15),
										_armorDamageReduction(5),
										_name(name)
{

	std::cout << "ScavTrap constructor has been called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
	std::cout << "God damn, this guy copy me!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " melee attacking " <<
	target << " causing " << this->_maleeAttackDamage <<" points of damage !" << std::endl;
	return ;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " ranged attacking " <<
	target << " causing " << this->_rangedAttackDamage <<" points of damage !" << std::endl;
	return ;
}

void	ScavTrap::pickAchair(std::string const & target)
{
	std::cout << "which chair would u like to sit on with piki tochonie or hui drochonie ?"
	<< std::endl;
	return ;
}

void	ScavTrap::dontBreatheTenMin(std::string const & target)
{
	std::cout << "don't breath ten min tic tac" << std::endl;
	return ;
}

void	ScavTrap::eatABug(std::string const & target)
{
	std::cout << "Eat a bug boy" << std::endl;
	return ;
}

void	ScavTrap::hitYourSelf(std::string const & target)
{
	std::cout << "Hit yourself! Do u like it ha ?" << std::endl;
	return ;
}

void	ScavTrap::tellANotFunnyJoke(std::string const & target)
{
	std::cout << "Tell me not funny joke" << std::endl;
	return ;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	typedef void	(ScavTrap::*ptrArr)(std::string const & target);
	int				funcNum;

	std::srand(time(NULL));
	funcNum = std::rand() % 5;
	ptrArr funcPtr[] = {&ScavTrap::dontBreatheTenMin, &ScavTrap::eatABug, 
	&ScavTrap::pickAchair, &ScavTrap::hitYourSelf, &ScavTrap::tellANotFunnyJoke};
	(this->*(funcPtr[funcNum]))(target);
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
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

	std::cout << "Assignation operator is in use !" << std::endl;
	return (*this);
}
