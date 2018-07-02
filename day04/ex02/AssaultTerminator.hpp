// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.hpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/31 15:37:23 by dborysen          #+#    #+#             //
//   Updated: 2018/05/31 15:37:23 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator &other);
		~AssaultTerminator();

		AssaultTerminator	&operator = (const AssaultTerminator &other);

		ISpaceMarine*	clone(void) const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;

};

#endif