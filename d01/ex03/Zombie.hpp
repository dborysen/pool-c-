// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 15:41:41 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 15:41:41 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public:
		std::string name;
		std::string type;
	
		void announce(void);
};

#endif