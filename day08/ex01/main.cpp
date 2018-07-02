// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 16:36:29 by dborysen          #+#    #+#             //
//   Updated: 2018/06/29 16:36:30 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);

	Span dup(sp);
	dup.addNumber(9);
	dup.addNumber(11);
	dup.addNumber(12);

	std::cout << dup.shortestSpan() << std::endl;
	std::cout << dup.longestSpan() << std::endl;
}