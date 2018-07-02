// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 15:42:03 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 15:42:03 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		ZOMBIE_EVENT_HPP
# define	ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <ctime>

class ZombieEvent {

	private:
		std::string	_ZombieType;

	public:
		void	setZombieType(std::string type);
		Zombie* newZombie(std::string name);
};

void	randomChump(void);

#endif