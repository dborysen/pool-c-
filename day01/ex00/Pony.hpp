// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/16 13:13:53 by dborysen          #+#    #+#             //
//   Updated: 2018/05/16 13:13:54 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef		PONY_HPP
# define	PONY_HPP

#include <iostream>
#include <string>

class Pony {
	public:
		static std::string	breed;
		static std::string	weight;
		static std::string 	color;
		static std::string	magicAbility;
	
		Pony(void);
		~Pony();
};

void	ponyOnTheHeap(void);
void	ponyOnTheStack(void);

#endif
