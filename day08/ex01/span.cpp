// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 16:36:22 by dborysen          #+#    #+#             //
//   Updated: 2018/06/29 16:36:23 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

Span::Span(unsigned int array_size) : _array_size(array_size) {}

Span::Span(const Span &other)
{
	*this = other;
	return ;
}

Span::~Span() {}

void	Span::addNumber(int new_num)
{
	try
	{
		if (this->_myVector.size() < this->_array_size)
			this->_myVector.push_back(new_num);
		else
			throw std::logic_error("There is no place for another number.");
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
}

int		Span::shortestSpan() const
{
	int 				max_def = 2147483647;
	std::vector<int>	cpy = this->_myVector;
	
	for (int i = 0; i < static_cast<int>(cpy.size()); i++)
	{
		for (int j = 0; j < static_cast<int>(cpy.size()); j++)
		{
			if (i != j && abs(cpy[i] - cpy[j]) < max_def)
				max_def = abs(cpy[i] - cpy[j]);
		}
	}
	return (max_def);
}

int		Span::longestSpan() const
{
	int 				min_def = 1;
	std::vector<int>	cpy = this->_myVector;
	
	for (int i = 0; i < static_cast<int>(cpy.size()); i++)
	{
		for (int j = 0; j < static_cast<int>(cpy.size()); j++)
		{
			if (i != j && abs(cpy[i] - cpy[j]) > min_def)
				min_def = abs(cpy[i] - cpy[j]);
		}
	}
	return (min_def);
}

Span &Span::operator=(const Span &other)
{
	this->_myVector = other._myVector;
	this->_array_size = other._array_size;
	return (*this);
}