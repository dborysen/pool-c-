// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 11:16:07 by dborysen          #+#    #+#             //
//   Updated: 2018/06/29 11:16:07 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> myVector;
	std::list<int> myList;

	myVector.push_back(12);
	myVector.push_back(1);
	myVector.push_back(133);

	myList.push_front(1);
	myList.push_front(2);
	myList.push_front(3);

	try
	{
		std::cout << "Is num in container: "<< easyfind(myVector, 1) << std::endl;
		std::cout << "Is num in container: "<< easyfind(myList, 3) << std::endl;	

		std::cout << "Is num in container: "<< easyfind(myVector, 2) << std::endl;
		std::cout << "Is num in container: "<< easyfind(myVector, 4) << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return (0);
}