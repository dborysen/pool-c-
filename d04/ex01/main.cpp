// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 15:32:19 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 15:32:19 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
	Character* zaz = new Character("zaz");
	Character* dik = new Character("dik");

    std::cout << *zaz;

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);

	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

/**********************************/

	// zaz->equip(pr);
	// dik->equip(pf);

	// std::cout << *zaz;
	// zaz->attack(c);
	// dik->attack(c);
	// std::cout << *zaz;
	// std::cout << *dik;
	// std::cout << c->getHP() << std::endl;
	// zaz->attack(c);
	// dik->attack(c);
	// std::cout << *zaz;
	// std::cout << *dik;
	// std::cout << c->getHP() << std::endl;
	// zaz->attack(c);
	// dik->attack(c);
	// std::cout << *zaz;
	// std::cout << *dik;
	// std::cout << "Enemy HP: "<<c->getHP() << std::endl;

	return (0);
}
