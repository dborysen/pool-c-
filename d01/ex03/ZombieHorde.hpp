// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 19:29:58 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 19:29:58 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		ZOMBIE_HORDE_HPP
# define	ZOMBIE_HORDE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include "Zombie.hpp"


class ZombieHorde {
	private:
		Zombie *Horde;

	public:
		ZombieHorde (int N);
		~ZombieHorde();

		Zombie	*randomChump(int N);
};


#endif