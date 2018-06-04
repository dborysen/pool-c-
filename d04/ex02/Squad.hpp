// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/30 11:28:32 by dborysen          #+#    #+#             //
//   Updated: 2018/05/30 11:28:32 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "AssaultTerminator.hpp" 
#include "TacticalMarine.hpp"

class Squad : public ISquad
{
	typedef struct	s_list
	{
		ISpaceMarine	*instanse;
		struct s_list	*next;
	}				t_list;

	private:
		t_list	*_units;
		int		_unitNum;

	public:
		Squad(void);
		Squad(const Squad &other);
		~Squad();

		Squad	&operator = (const Squad &other);

		int				getCount() const;
		int				push(ISpaceMarine*);
		ISpaceMarine	*getUnit(int) const;
};

#endif
