// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/24 15:12:48 by dborysen          #+#    #+#             //
//   Updated: 2018/05/24 15:12:49 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap toto("Bobby");
	ScavTrap bobo("Timmy");

	std::cout << std::endl;
	toto.vaulthunter_dot_exe("enemy");
	std::cout << std::endl;
	return (0);
}