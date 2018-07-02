// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/28 15:38:02 by dborysen          #+#    #+#             //
//   Updated: 2018/05/28 15:38:02 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim(void)
{
	std::cout << "Please type a _name: ";
    std::cin >> this->_name;
	return ;
}

Victim::Victim(Victim &other)
{
	*this = other;
	return ;
}

Victim::Victim(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return ;
}

const std::string & Victim::getName(void) const
{
	return (this->_name);
}

Victim    &Victim::operator = (const Victim &other)
{
	this->_name = other.getName();
	return *this;
}

std::ostream &operator << (std::ostream &o, const Victim &rhs)
{
    o << "I'am " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
