// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/31 15:30:28 by dborysen          #+#    #+#             //
//   Updated: 2018/05/31 15:30:31 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine &other);
		~TacticalMarine();

		TacticalMarine	&operator = (const TacticalMarine &other);

		ISpaceMarine*	clone(void) const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif