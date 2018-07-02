// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 17:14:23 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 17:14:24 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		int			_AP;
		AWeapon		*_weapon;
		std::string _name;

	public:
		Character(void);
		Character(std::string const & name);
		Character(const Character &other);
		~Character();

		Character    &operator = (const Character &other);

		void				recoverAP();
		void				equip(AWeapon*);
		void				attack(Enemy*);
		const std::string	&getName() const;
		const int			&getAP() const;
		const std::string	getWeaponName() const;
};

std::ostream &operator << (std::ostream &o, const Character &rhs);

#endif