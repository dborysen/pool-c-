// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AMateria.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/01 13:50:17 by dborysen          #+#    #+#             //
//   Updated: 2018/06/01 13:50:18 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
    private:
             unsigned int xp_;
	public:
		AMateria(std::string const & type);
		~AMateria();
		std::string const	&getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif