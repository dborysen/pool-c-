// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/21 19:48:00 by dborysen          #+#    #+#             //
//   Updated: 2018/05/21 19:48:01 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>

class Human
{
	private:
		void	meleeAttack(std::string const & target);
		void	rangedAttack(std::string const & target);
		void	intimidatingShout(std::string const & target);

	public:
		void	action(std::string const & action_name, std::string const & target);

};

#endif