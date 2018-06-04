// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/28 09:59:48 by dborysen          #+#    #+#             //
//   Updated: 2018/05/28 09:59:49 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    return ;
}

SuperTrap::SuperTrap(std::string name)
{
    (ClapTrap(this)->_hitPoints) = 100;
    return ;
}

SuperTrap::~SuperTrap(void)
{

}