// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/18 16:17:31 by dborysen          #+#    #+#             //
//   Updated: 2018/05/18 16:17:31 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	private:
		Weapon		&humanaWeapon;
		std::string	name;

	public:
		void		attack(void);
		HumanA(std::string	name_value, Weapon	&weapon_value);
		~HumanA();
};

#endif