// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 15:42:15 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 15:42:16 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

int main(void)
{
	randomChump();
	return (0);
}

void	randomChump(void)
{
	int nameNum;
	Zombie *newZombie;
	ZombieEvent event;
	std::string	namesArr[] = {"Shon", "Andy", "Michael", "Josh", "Kirilo"};
	
	std::srand(time(NULL));
	nameNum = std::rand() % 5;
	event.setZombieType("Regular every day normal mother f*cker");
	newZombie = event.newZombie(namesArr[nameNum]);
	newZombie->announce();
	delete newZombie;
}
