// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/31 15:30:20 by dborysen          #+#    #+#             //
//   Updated: 2018/05/31 15:30:20 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine &other)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	// *this = other;
	return ;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

void	TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
	return ;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
	return ;
}

void	TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
	return ;
}

ISpaceMarine *TacticalMarine::clone(void) const
{
	TacticalMarine *clone = new TacticalMarine;
	return (clone);
}

TacticalMarine	&TacticalMarine::operator = (const TacticalMarine &other)
{
	TacticalMarine *newMarine = new TacticalMarine;
	
	return (*this);
}
