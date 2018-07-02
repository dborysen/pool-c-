// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 16:36:29 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 16:36:30 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	this->_type = "";
	this->_hp = 0;
	this->_deathWords = "";
	return ;
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->_hp = hp;
	this->_type = type;
	this->_deathWords = "";
	return ;
}

Enemy::Enemy(const Enemy &other)
{
	*this = other;
}

Enemy::~Enemy()
{
	return ;
}

const std::string	&Enemy::getType() const
{
	return (this->_type);
}

int			Enemy::getHP() const
{
	return (this->_hp);
}

const std::string	&Enemy::getDeathWords() const
{
	return (this->_deathWords);
}

void	Enemy::takeDamage(int damage)
{
	if (this->_hp - damage <= 0)
		this->_hp = 0;
	else
		this->_hp -= damage;
}

Enemy    &Enemy::operator = (const Enemy &other)
{
	this->_hp = other.getHP();
	this->_type = other.getType();
	return (*this);
}

