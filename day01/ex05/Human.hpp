// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/17 11:42:45 by dborysen          #+#    #+#             //
//   Updated: 2018/05/17 11:42:46 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human {
	public:
		Brain const	_newBrain;

	public:
		Brain const&	getBrain(void);
		Brain const*	identify(void) const;
};

#endif
