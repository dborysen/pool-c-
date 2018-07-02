// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 14:39:22 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 14:39:22 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	protected:
		std::string _name;
		int			_apcost;
		int			_damage;

	public:
		AWeapon(void);
		AWeapon(AWeapon &other);
		AWeapon(std::string const & name, int apcost, int damage);
		~AWeapon();
		
		AWeapon    &operator = (const AWeapon &other);
        
		std::string		getName() const;
		int				getAPCost() const;
        int				getDamage() const;
		virtual void	attack() const = 0;
};

#endif
