// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 16:37:05 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 16:37:06 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef REDSCORPION_HPP
# define REDSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
	RadScorpion(void);
	RadScorpion(const RadScorpion &other);
	~RadScorpion();

	using Enemy::operator=;
};

#endif