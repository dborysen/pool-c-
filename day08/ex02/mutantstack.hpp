// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 18:40:50 by dborysen          #+#    #+#             //
//   Updated: 2018/06/29 18:40:50 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <iostream>
# include <cmath>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;	

		MutantStack(void) {}
		~MutantStack(void) {}
		MutantStack(MutantStack const &other) : std::stack<T>(other) {}

		using		std::stack<T>::operator=;

		iterator	begin();
		iterator	end();
};

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator	MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

#endif