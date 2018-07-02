// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/28 13:26:47 by dborysen          #+#    #+#             //
//   Updated: 2018/05/28 13:26:48 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer(void);
        Sorcerer(Sorcerer &other);
        Sorcerer(const std::string &name, const std::string &title);
        ~Sorcerer(void);

        Sorcerer    &operator = (const Sorcerer &other);

		void	polymorph(Victim const &) const;
		const	std::string & getName(void) const;
		const	std::string & getTitle(void) const;

	private:
		std::string	_name;
		std::string	_title;
};

std::ostream &operator << (std::ostream &o, const Sorcerer &rhs);

#endif
