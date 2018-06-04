// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/28 15:37:57 by dborysen          #+#    #+#             //
//   Updated: 2018/05/28 15:37:57 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim &other);
		~Victim();

		Victim	&operator = (const Victim &other);

		virtual void		getPolymorphed() const;
		virtual const std::string &	getName(void) const;
	protected:
		std::string	_name;
		
};

std::ostream &operator << (std::ostream &o, const Victim &rhs);

#endif