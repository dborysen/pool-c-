// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/17 11:42:57 by dborysen          #+#    #+#             //
//   Updated: 2018/05/17 11:42:58 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int	main(void)
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
