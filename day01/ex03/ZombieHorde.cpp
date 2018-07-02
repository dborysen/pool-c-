// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 19:30:06 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 19:30:06 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::cout << "ZOMBIES ARE COMMING !!!!!!!" << std::endl;
	this->Horde = this->randomChump(N);
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "All zombies are dead" << std::endl;
	delete [] this->Horde;
}

Zombie	*ZombieHorde::randomChump(int N)
{
	int nameNum;
	Zombie *zombies = new Zombie[N];
	std::string	namesArr[] = {"Shon", "Andy", "Michael", "Josh", "Kirilo"};

	std::srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		nameNum = std::rand() % 5;
		zombies[i].type = "Regular every day normal mother f*cker";
		zombies[i].name = namesArr[nameNum];
		zombies[i].announce();
	}
	return (zombies);
}