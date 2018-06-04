// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/28 09:59:54 by dborysen          #+#    #+#             //
//   Updated: 2018/05/28 09:59:55 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap(void);
        SuperTrap(std::string name);
        ~SuperTrap(void);
};

#endif