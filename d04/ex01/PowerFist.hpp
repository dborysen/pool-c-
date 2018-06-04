// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 14:40:15 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 14:40:15 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist &other);
		~PowerFist();

	using AWeapon::operator=;

	void	attack() const;	
};
#endif