// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISpaceMarine.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/30 12:55:29 by dborysen          #+#    #+#             //
//   Updated: 2018/05/30 12:55:30 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <iostream>
#include <string>

class ISpaceMarine
{
	public:
		virtual	~ISpaceMarine() {}
		virtual ISpaceMarine*	clone() const = 0;
		virtual void			battleCry() const = 0;
		virtual void			rangedAttack() const = 0;
		virtual void			meleeAttack() const = 0;
};

#endif