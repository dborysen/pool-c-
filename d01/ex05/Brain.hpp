// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/17 11:42:26 by dborysen          #+#    #+#             //
//   Updated: 2018/05/17 11:42:26 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	public:
		Brain();
		~Brain();
		Brain const	*identify(void) const;
};

#endif
