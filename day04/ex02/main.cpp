// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/01 10:42:41 by dborysen          #+#    #+#             //
//   Updated: 2018/06/01 10:42:42 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine	*bob = new TacticalMarine;
	ISpaceMarine	*jim = new AssaultTerminator;
	TacticalMarine	*lor = new TacticalMarine();
	ISpaceMarine	*lor2 = new TacticalMarine(*lor);
	ISpaceMarine	*nick = bob->clone();
	
	ISquad			*vla = new Squad;
	
	vla->push(bob);
	vla->push(jim);
	vla->push(lor2);
	vla->push(nick);
	ISquad* vlc = vla;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	return (0);
}
