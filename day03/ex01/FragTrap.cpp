// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/24 15:12:30 by dborysen          #+#    #+#             //
//   Updated: 2018/05/24 15:12:30 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :				_hitPoints(100),
										_maxHitPoints(100),
										_energyPoints(100),
										_maxEnergyPoints(100),
										_level(1),
										_maleeAttackDamage(30),
										_rangedAttackDamage(20),
										_armorDamageReduction(5),
										_hitByChickenDamage(15),
										_peeOnItDamage(5),
										_cussOutItDamage(3),
										_name("")
{

	std::cout << "FR4G-TP constructor has been called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) :	_hitPoints(100),
										_maxHitPoints(100),
										_energyPoints(100),
										_maxEnergyPoints(100),
										_level(1),
										_maleeAttackDamage(30),
										_rangedAttackDamage(20),
										_armorDamageReduction(5),
										_hitByChickenDamage(15),
										_peeOnItDamage(5),
										_cussOutItDamage(3),
										_name(name)
{

	std::cout << "FR4G-TP constructor has been called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
	std::cout << "Hey! look at me! Do like me!" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP destructor has been called" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " melee attacking " <<
	target << " causing " << this->_maleeAttackDamage <<" points of damage !" << std::endl;
	return ;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " ranged attacking " <<
	target << " causing " << this->_rangedAttackDamage <<" points of damage !" << std::endl;
	return ;
}

void	FragTrap::hitByChicken(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " hitting by chicken " <<
	target << " causing " << this->_hitByChickenDamage <<" points of damage !" << std::endl;
	return ;
}

void	FragTrap::peeOnIt(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " pee on " <<
	target << " causing " << this->_peeOnItDamage <<" points of damage !" << std::endl;
	return ;	
}

void	FragTrap::cussOutIt(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " cuss out on " <<
	target << " causing " << this->_cussOutItDamage <<" points of damage !" << std::endl;
	return ;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	typedef void	(FragTrap::*ptrArr)(std::string const & target);
	int				funcNum;

	std::srand(time(NULL));
	funcNum = std::rand() % 5;
	ptrArr funcPtr[] = {&FragTrap::meleeAttack, &FragTrap::rangedAttack, 
	&FragTrap::hitByChicken, &FragTrap::cussOutIt, &FragTrap::peeOnIt};

	if (this->_energyPoints >= 25 && this->_hitPoints > 0)
	{
		this->_energyPoints -= 25;
		std::cout << "Let's choose attack...hmm" << std::endl;
		(this->*(funcPtr[funcNum]))(target);
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
					 "  EP  (" << this->_energyPoints << "%)"<< std::endl; 
	}
	else if (this->_hitPoints == 0)
	{
		std::cout << "Yo i'm dead! Jesus..." << std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
				"  EP  (" << this->_energyPoints << "%)"<< std::endl; 
	}
	else if (this->_energyPoints < 25 && this->_hitPoints > 0)
	{
		std::cout << "I guess, i'am out of energy" << std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
		"  EP  (" << this->_energyPoints << "%)"<< std::endl; 
	}
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints >= amount)
	{
		std::cout << "FR4G-TP " << this->_name << "taking " << amount 
		<< " damage points"<< std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
					"  EP  (" << this->_energyPoints << "%)"<< std::endl; 
		this->_hitPoints -= amount;
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "I'm dying Khhh Khhhhh, i'm so young KhhhK hHKhfsdk" << std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
			"  EP  (" << this->_energyPoints << "%)"<< std::endl; 
	}	
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints + amount <= this->_maxHitPoints)
	{
		this->_hitPoints += amount;
		std::cout << "FR4G-TP " << this->_name << "has been restored " << amount 
		<< " health points"<< std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
				"  EP  (" << this->_energyPoints << "%)"<< std::endl; 
	}
	else if (this->_hitPoints + amount > this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << "Oh i'm full of health!"<< std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
		"  EP  (" << this->_energyPoints << "%)"<< std::endl; 
	}
	else if (this->_hitPoints == this->_maxHitPoints)
	{
		std::cout << "I'm good, tnx bro !"<< std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
		"  EP  (" << this->_energyPoints << "%)"<< std::endl; 
	}

	if (this->_energyPoints + amount <= this->_maxEnergyPoints)
	{
		this->_energyPoints += amount;
		std::cout << "FR4G-TP " << this->_name << "has been restored " << amount 
		<< " energy points"<< std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
				"  EP  (" << this->_energyPoints << "%)"<< std::endl; 
	}
	else if (this->_energyPoints + amount > this->_maxEnergyPoints)
	{
		this->_energyPoints = this->_maxEnergyPoints;
		std::cout << "Oh i'm full of health!"<< std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
		"  EP  (" << this->_energyPoints << "%)"<< std::endl;
	}
	else if (this->_energyPoints == this->_maxEnergyPoints)
	{
		std::cout << "I'm good, tnx bro !"<< std::endl;
		std::cout << "HP  (" << this->_hitPoints << "%)  " << 
		"  EP  (" << this->_energyPoints << "%)"<< std::endl;
	}

	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
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
