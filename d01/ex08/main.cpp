// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/21 19:48:14 by dborysen          #+#    #+#             //
//   Updated: 2018/05/21 19:48:14 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int main(void)
{
	Human	Jack;

	Jack.action("meleeAttack", "wolf");
	Jack.action("rangedAttack", "enemy unit");
	Jack.action("intimidatingShout", "wife");
	return (0);
}