// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 13:09:42 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 13:09:43 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(void);
		Peon(Peon &other);
		Peon(std::string name);
		~Peon();

		Peon	&operator = (const Peon &other);

		void				getPolymorphed(void) const;
		const std::string &	getName(void) const;
};

std::ostream &operator << (std::ostream &o, const Peon &rhs);

#endif