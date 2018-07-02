// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 11:15:54 by dborysen          #+#    #+#             //
//   Updated: 2018/06/29 11:15:55 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>
# include <iostream>
# include <string>

template <typename T>
std::string	easyfind(const T &container, int value)
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
	{
		if (*it == value)
			return ("Yes");
	}
	throw std::logic_error("No current number in container");
};

#endif