// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/18 16:17:39 by dborysen          #+#    #+#             //
//   Updated: 2018/05/18 16:17:40 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		Weapon		*humanbWeapon;
		std::string	name;

	public:
		void		attack(void);
		void		setWeapon(Weapon &weapon_value);
		HumanB(std::string name);
		~HumanB();
};

#endif