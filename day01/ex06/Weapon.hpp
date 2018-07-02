// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/18 16:17:13 by dborysen          #+#    #+#             //
//   Updated: 2018/05/18 16:17:13 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEPON_HPP
# define WEPON_HPP

#include <iostream>
#include <string>

class Weapon {
	public:
		std::string			type;

		Weapon(std::string type);
		~Weapon();
		std::string const	&getType();
		void				setType(std::string value);
};


#endif