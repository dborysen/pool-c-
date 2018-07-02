// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/28 13:26:51 by dborysen          #+#    #+#             //
//   Updated: 2018/05/28 13:26:51 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    std::cout << "Please type a _name: ";
    std::cin >> this->_name;
    std::cout << "Please type a _title: ";
    std::cin >> this->_title;
    return;
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
{
	this->_name = name;
	this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
    return ;
}

Sorcerer::Sorcerer(Sorcerer &other)
{
	*this = other;
	return;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !"
    << std::endl;
    return ;
}

void Sorcerer::polymorph(Victim const &vict) const
{
	vict.getPolymorphed();
	return ;
}

const std::string & Sorcerer::getName(void) const
{
	return (this->_name);
}

const std::string & Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::ostream &operator << (std::ostream &o, const Sorcerer &rhs)
{
    o << "I'am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}

Sorcerer	&Sorcerer::operator = (const Sorcerer &other)
{
	this->_name = other.getName();
	this->_title = other.getTitle();
	return (*this);
}
