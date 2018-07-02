// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/27 15:21:54 by dborysen          #+#    #+#             //
//   Updated: 2018/06/27 15:21:54 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string.h>

template <typename T>
void	print(T value)
{
	std::cout << value << std::endl;
}

template <typename T>
void	iter(T *arr, int length, void (*f)(T value))
{
	for (int i = 0; i < length; i++)
	{
		f(arr[i]);
	}
}

int		main()
{
	int arr[] = {0, 1, 2, 3};
	iter(arr, 4, print);
	std::cout << std::endl;

	char arr1[] = {'a', 'b', 'c'};
	iter(arr1, 3, print);
	std::cout << std::endl;

	char arr2[3][5] = {"one", "two", "tree"};
	iter(arr2, 3, print);

	return (0);
}
