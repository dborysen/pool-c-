// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.cpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/31 15:37:32 by dborysen          #+#    #+#             //
//   Updated: 2018/05/31 15:37:32 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator &other)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
	return ;
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
	return ;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
	AssaultTerminator *clone = new AssaultTerminator;
	return (clone);
}

AssaultTerminator	&AssaultTerminator::operator = (const AssaultTerminator &other)
{
	return (*this);
}
