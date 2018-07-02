// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/29 16:36:25 by dborysen          #+#    #+#             //
//   Updated: 2018/05/29 16:36:26 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	protected:
		int			_hp;
		std::string	_type;
		std::string _deathWords;

	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &other);
		virtual ~Enemy();

		Enemy    &operator = (const Enemy &other);

		const std::string	&getType() const;
		const std::string	&getDeathWords() const;
		int					getHP() const;
		virtual void		takeDamage(int);

};

#endif