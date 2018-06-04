// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 13:09:39 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 13:09:39 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"

Peon::Peon(void)
{
	std::cout << "Please type a _name: ";
    std::cin >> this->_name;
	return ;
}

Peon::Peon(std::string name) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon &other)
{
	*this = other;
	return ;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

const std::string &	Peon::getName(void) const
{
	return (this->_name);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
	return ;
}

Peon    &Peon::operator = (const Peon &other)
{
	this->_name = other.getName();
	return *this;
}

std::ostream &operator << (std::ostream &o, const Peon &rhs)
{
    o << "I'am " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
