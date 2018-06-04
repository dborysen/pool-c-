// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISquad.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/30 11:31:56 by dborysen          #+#    #+#             //
//   Updated: 2018/05/30 11:31:56 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual					~ISquad() {}
		virtual int				getCount() const = 0;
		virtual ISpaceMarine*	getUnit(int) const = 0;
		virtual int 			push(ISpaceMarine*) = 0;

};

#endif