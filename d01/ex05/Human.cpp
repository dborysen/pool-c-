// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/17 11:42:35 by dborysen          #+#    #+#             //
//   Updated: 2018/05/17 11:42:36 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Brain const	*Human::identify(void) const
{
	return(this->_newBrain.identify());
}

Brain const &Human::getBrain(void)
{
	return (this->_newBrain);
}
