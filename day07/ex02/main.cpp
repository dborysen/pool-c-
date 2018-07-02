// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/27 16:25:31 by dborysen          #+#    #+#             //
//   Updated: 2018/06/27 16:25:32 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string.h>
#include "Array.hpp"

int main()
{
	try
	{
		Array<int> arr(5);
		std::cout << arr[1] << std::endl;
		std::cout << arr[4] << std::endl;
		std::cout << arr.size() << std::endl;

		Array<char> arr1(3);
		std::cout << arr1[1] << std::endl;
		std::cout << arr1.size() << std::endl;
		
		Array<char> arr2;
		std::cout << arr2[0] << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return (0);
}